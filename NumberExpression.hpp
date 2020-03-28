#ifndef NUMBEREXPRESSION_HPP
#define NUMBEREXPRESSION_HPP

#include "Expression.hpp"

namespace OK
{
class NumberExpression final : public Expression
{
	public:
	NumberExpression(Token);

	TokenType& type() override { return m_type; }
	const TokenType& type() const override { return m_type; }

	private:
	TokenType m_type;
	Token m_number_token;
};

}	 // namespace OK
#endif	  // NUMBEREXPRESSION_HPP
