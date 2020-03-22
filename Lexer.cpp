#include "Lexer.hpp"

namespace OK
{
Lexer::Lexer(char* str) : m_str(str), m_index(0ULL) {}

Token Lexer::nextToken()
{
	if(m_index >= m_str.length())
		return Token(TokenType::EndOfFile, m_index, "\0", 0UL);
	// Integer check
	if(std::isdigit(current()))
	{
		size_t start = m_index;

		while(std::isdigit(current()))
			moveForward();

		size_t length = m_index - start;
		char* token_buffer = nullptr;
		m_str.copy(token_buffer, length, start);
		int64_t value = std::atoll(token_buffer);
		return Token(TokenType::Number, start, token_buffer, value);
	}

	if(std::isspace(current()))
	{
		size_t start = m_index;

		while(std::isspace(current()))
			moveForward();

		size_t length = m_index - start;
		char* token_buffer = nullptr;
		m_str.copy(token_buffer, length, start);
		return Token(TokenType::Whitespace, start, token_buffer, nullptr);
	}

	switch(current())
	{
		case '+': return Token(TokenType::Addition, m_index++, "+", nullptr);
		case '-': return Token(TokenType::Subtraction, m_index++, "-", nullptr);
		case '*': return Token(TokenType::Multiplication, m_index++, "*", nullptr);
		case '/': return Token(TokenType::Division, m_index++, "/", nullptr);
	}
}

}	 // namespace OK
