#ifndef PARSER_HPP
#define PARSER_HPP

#include "Lexer.hpp"

#include <vector>

namespace OK
{
class TokenNode
{
	public:
	TokenType& type() { return m_type; }
	const TokenType& type() const { return m_type; }

	private:
	TokenType m_type;
};

class Parser
{
	public:
	Parser(char* str) : m_str(str), m_lexer(str) {}
	Parser& parse();

	private:
	std::string_view m_str;
	Lexer m_lexer;
	std::vector<Token> m_tokens {};
	size_t m_position {0ULL};

	Token& peek(size_t);
	Token& current();
};

}	 // namespace OK
#endif	  // PARSER_HPP
