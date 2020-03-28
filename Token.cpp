#include "Token.hpp"

namespace OK
{
Token::Token(TokenType type, size_t pos, const char* str, primitive_t value) :
	m_type(type), m_start_pos(pos), m_str(str), m_value(value)
{
}

}	 // namespace OK
