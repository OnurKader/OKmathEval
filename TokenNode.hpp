#ifndef TOKENNODE_HPP
#define TOKENNODE_HPP

namespace OK
{
// TODO Add shift and comparison operators
enum class TokenType : unsigned char
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
	Expr,
	NumberExpr,
	BinaryExpr,
	ParensExpr,
	EndOfFile,
	Bad
};

static constexpr const char* TokenTypeStrings[] = {
	"Whitespace", "Number",		 "Addition",   "Subtraction", "Multiplication",
	"Division",	  "Modulus",	 "BitwiseAND", "BitwiseOR",	  "BitwiseXOR",
	"BitwiseNOT", "LogicalAND",	 "LogicalOR",  "LogicalXOR",  "LogicalNOT",
	"LeftParens", "RightParens", "Expr",	   "NumberExpr",  "BinaryExpr",
	"ParensExpr", "EndOfFile",	 "Bad"};

class TokenNode
{
	public:
	TokenNode(TokenType type) : m_type(type) {}
	virtual TokenType& type() { return m_type; }
	virtual const TokenType& type() const { return m_type; }
	virtual ~TokenNode();

	private:
	TokenType m_type;
};

}	 // namespace OK

#endif	  // TOKENNODE_HPP
