#include "NumberExpression.hpp"

namespace OK
{
NumberExpression::NumberExpression(Token token) :
	Expression(TokenType::NumberExpr), m_type(TokenType::NumberExpr), m_number_token(token)
{
}

}	 // namespace OK
