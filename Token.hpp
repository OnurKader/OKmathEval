#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <cstring>
#include <string>
#include <string_view>

namespace OK
{
class Token
{
	public:
	Token(const char*);

	private:
	std::string_view m_bulk;
};
}	 // namespace OK

#endif	  // TOKEN_HPP
