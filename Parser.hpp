#ifndef PARSER_HPP
#define PARSER_HPP

#include "Lexer.hpp"
#include "Expression.hpp"

#include <vector>

namespace OK
{

class Parser
{
	public:
	Parser(char*);
	Parser& parse();

	private:
	std::string_view m_str;
	Lexer m_lexer;
	std::vector<Token> m_tokens {};
	size_t m_position {0ULL};

	Token& peek(size_t);
	Token& current();
	Token& nextToken();
	Expression parsePrimaryExpression();
	Token match(TokenType);
};

}	 // namespace OK
#endif	  // PARSER_HPP
