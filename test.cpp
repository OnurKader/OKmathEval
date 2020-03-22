#include "Token.hpp"

#include <iostream>

int main()
{
	OK::Token tok("1+2 * 3");
	char* input_buffer = nullptr;
	ssize_t read_count = 0LL;
	size_t len = 0ULL;

	while((read_count = getline(&input_buffer, &len, stdin)) != -1)
	{
		// Get rid of the newline at the end of stdin input
		input_buffer[--read_count] = '\0';
		std::string_view input(input_buffer);
		std::cout << input << std::endl;
	}

	free(input_buffer);

	return 0;
}
