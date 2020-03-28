#include "Parser.hpp"

namespace OK
{
Parser& Parser::parse()
{
	Token tok = m_lexer.nextToken();
	while(tok.type() != TokenType::EndOfFile)
	{
		if(tok.type() != TokenType::Whitespace && tok.type() != TokenType::Bad)
			m_tokens.push_back(tok);

		tok = m_lexer.nextToken();
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

}	 // namespace OK
