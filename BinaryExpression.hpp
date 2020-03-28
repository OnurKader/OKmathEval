#ifndef BINARYEXPRESSION_HPP
#define BINARYEXPRESSION_HPP

#include "Expression.hpp"

namespace OK
{
class BinaryExpression : public Expression
{
	public:
	BinaryExpression(Token, Expression, Expression);
	TokenType& type() override { return m_type; }
	const TokenType& type() const override { return m_type; }

	private:
	Token m_oper;
	Expression m_lhs;
	Expression m_rhs;
	TokenType m_type;
};

}	 // namespace OK

#endif	  // BINARYEXPRESSION_HPP
