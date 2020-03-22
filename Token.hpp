#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <cstring>
#include <string>
#include <string_view>
#include <type_traits>
#include <variant>

namespace OK
{
using primitive_t = std::variant<std::nullptr_t, int64_t, uint64_t, char, double, const char*>;

// TODO Add shift and comparison operators
enum class TokenType : uint8_t
{
	Whitespace,
	Number,
	Addition,
	Subtraction,
	Multiplication,
	Division,
	Modulus,
	BitwiseAND,
	BitwiseOR,
	BitwiseXOR,
	BitwiseNOT,
	LogicalAND,
	LogicalOR,
	LogicalXOR,
	LogicalNOT,
	LeftParens,
	RightParens,
	UnaryExpr,
	BinaryExpr,
	ParensExpr,
	EndOfFile,
	Bad
};

class Token
{
	public:
	Token(TokenType, size_t, const char*, primitive_t);
	std::string_view& view() { return m_str; }
	const std::string_view& view() const { return m_str; }
	TokenType type() const { return m_type; }
	size_t startPos() const { return m_start_pos; }

	template<typename T>
	T as();

	private:
	TokenType m_type;
	size_t m_start_pos;
	std::string_view m_str;
	primitive_t m_value;
};
}	 // namespace OK

#endif	  // TOKEN_HPP
