#include "Parser.hpp"

#include "BinaryExpression.hpp"
#include "NumberExpression.hpp"

namespace OK
{
Parser::Parser(char* str) : m_str(str), m_lexer(str)
{
	Token tok = m_lexer.nextToken();
	while(tok.type() != TokenType::EndOfFile)
	{
		if(tok.type() != TokenType::Whitespace && tok.type() != TokenType::Bad)
			m_tokens.push_back(tok);

		tok = m_lexer.nextToken();
	}
}

Parser& Parser::parse()
{
	Expression lhs = parsePrimaryExpression();

	while(current().type() == TokenType::Addition || current().type() == TokenType::Subtraction)
	{
		Token operator_token = nextToken();
		Expression rhs = parsePrimaryExpression();
		lhs = BinaryExpression(operator_token, lhs, rhs);
	}

	return *this;
}

Token& Parser::peek(size_t offset)
{
	size_t index = m_position + offset;
	if(index >= m_tokens.size())
		return m_tokens.back();

	return m_tokens[index];
}

Token& Parser::current() { return peek(0ULL); }

Token& Parser::nextToken()
{
	Token& tok = current();

	++m_position;

	return tok;
}

Expression Parser::parsePrimaryExpression()
{
	Token number_token = match(TokenType::NumberExpr);
	return NumberExpression(number_token);
}

Token Parser::match(TokenType type)
{
	if(current().type() == type)
		return nextToken();
	return Token(type, current().startPos(), nullptr, nullptr);
}

}	 // namespace OK
