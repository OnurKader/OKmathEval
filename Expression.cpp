#include "Expression.hpp"

namespace OK
{
Expression::Expression() : TokenNode(TokenType::Expr) {}
Expression::Expression(TokenType type) : TokenNode(type) {}

}	 // namespace OK
