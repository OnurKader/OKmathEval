#ifndef TOKEN_HPP
#define TOKEN_HPP

#include "TokenNode.hpp"

#include <cstring>
#include <string>
#include <string_view>
#include <variant>

namespace OK
{
using primitive_t = std::variant<std::nullptr_t, int64_t, uint64_t, double>;

class Token
{
	public:
	Token(TokenType type, size_t pos, const char* str, primitive_t value);

	Token(const Token& other) :
		m_type(other.m_type),
		m_start_pos(other.m_start_pos),
		m_str(other.m_str),
		m_value(other.m_value)
	{
	}

	Token& operator=(const Token& other)
	{
		m_type = other.m_type;
		m_start_pos = other.m_start_pos;
		m_str = other.m_str;
		m_value = other.m_value;
		return *this;
	}

	std::string_view& view() { return m_str; }
	const std::string_view& view() const { return m_str; }
	TokenType& type() { return m_type; }
	const TokenType& type() const { return m_type; }
	size_t startPos() const { return m_start_pos; }

	primitive_t& value() { return m_value; }
	const primitive_t& value() const { return m_value; }

	template<typename T>
	T& as()
	{
		return std::get<T>(m_value);
	}

	template<typename T>
	const T& as() const
	{
		return std::get<T>(m_value);
	}

	private:
	TokenType m_type;
	size_t m_start_pos;
	std::string_view m_str;
	primitive_t m_value;
};
}	 // namespace OK

#endif	  // TOKEN_HPP
