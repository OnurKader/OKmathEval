#ifndef TOKENNODE_HPP
#define TOKENNODE_HPP

#include "Token.hpp"

namespace OK
{
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
