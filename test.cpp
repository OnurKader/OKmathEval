#include "Parser.hpp"

#include <iostream>

int main()
{
	char* input_buffer = nullptr;
	ssize_t read_count = 0LL;
	size_t len = 0ULL;

	std::cout << "\033[32;1m\u276F\033[m ";

	while((read_count = getline(&input_buffer, &len, stdin)) != -1)
	{
		// Get rid of the newline at the end of stdin input
		input_buffer[--read_count] = '\0';
		OK::Lexer lexer(input_buffer);
		while(true)
		{
			OK::Token tok = lexer.nextToken();
			if(tok.type() == OK::TokenType::EndOfFile)
				break;
			if(tok.type() == OK::TokenType::Whitespace)
				continue;

			std::cout << OK::TokenTypeStrings[static_cast<int8_t>(tok.type())] << ": " << tok.view()
					  << std::endl;
		}
		std::cout << "\033[32;1m\u276F\033[m ";
	}

	free(input_buffer);

	return 0;
}
