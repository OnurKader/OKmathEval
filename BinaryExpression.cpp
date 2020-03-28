#include "BinaryExpression.hpp"

namespace OK
{
BinaryExpression::BinaryExpression(Token oper, Expression lhs, Expression rhs) :
	m_oper(oper), m_lhs(lhs), m_rhs(rhs)
{
}
}	 // namespace OK
