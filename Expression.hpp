#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP

#include "TokenNode.hpp"

namespace OK
{
class Expression : public TokenNode
{
	public:
	Expression();
	Expression(TokenType);
};

}	 // namespace OK

#endif	  // EXPRESSION_HPP
