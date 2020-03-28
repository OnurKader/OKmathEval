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
		OK::Lexer tok(input_buffer);
		std::cout << tok.view() << std::endl;
	}

	free(input_buffer);

	return 0;
}
