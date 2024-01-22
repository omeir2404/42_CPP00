#include <iostream>

int main(int argc, char **argv)
{
	int word = 1;
	int letter = 0;

	if (!argv[1])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (word < argc)
		{
			while (argv[word][letter])
			{
				if (argv[word][letter] > 96 && argv[word][letter] < 123)
					argv[word][letter] -= 32;
				std::cout << argv[word][letter];
				letter++;
			}
			std::cout << " ";
			word++;
			letter = 0;
		}
		std::cout << "\n"; }
}
