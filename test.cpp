#include "Lexer.hpp"

#include <iostream>

int main()
{
	char* input_buffer = nullptr;
	ssize_t read_count = 0LL;
	size_t len = 0ULL;

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

			std::cout << OK::TokenTypeStrings[static_cast<int8_t>(tok.type())] << ": " << tok.view()
					  << std::endl;
		}
		std::cout << "------------------------------------------" << std::endl;
	}

	free(input_buffer);

	return 0;
}
