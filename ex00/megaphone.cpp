#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int word = 1;
	int letter = 0;

	if (!argv[1])
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (word < argc)
		{
			while (argv[word][letter])
			{
				if (argv[word][letter] > 96 && argv[word][letter] < 123)
					argv[word][letter] -= 32;
				cout << argv[word][letter];
				letter++;
			}
			cout << " ";
			word++;
			letter = 0;
		}
		cout << "\n"; }
}
