#ifndef LEXER_HPP
#define LEXER_HPP

#include "Token.hpp"

namespace OK
{
class Lexer
{
	public:
	Lexer(char*);
	const char& current() const { return m_str[m_index]; }
	size_t moveForward() { return ++m_index; }
	Token nextToken();
	const std::string_view& view() const { return m_str; }

	private:
	std::string_view m_str;
	size_t m_index;
};
}	 // namespace OK
#endif	  // LEXER_HPP
