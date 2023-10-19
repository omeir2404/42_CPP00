#include "includes.hpp"
#include <string>
#include <iostream>
using namespace std;


int	ft_strcomp(string s1, string s2)
{
	int i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (1);
	}
	return (0);
}

void	displayContacts(PhoneBook book)
{
	int i = 0;
	cout << "|INDEX     " << "|FIRST NAME|" <<  "LAST NAME |" << "NICKNAME  |\n"; 
	while (book.contact[i].contactFilled == 1)
	{
		cout << book.contact[i].index ;
		// cout << book.contact[i].firstName.resize(10);
		// << book.contact[i].lastName.resize(10) << book.contact[i].nickname.resize(10);
		i++;
		cout << i << '\n';
	}
}

int main(int argc, char **argv)
{
	static	PhoneBook book;
	string  input;
	int con = 1;

	while (1)
	{
		cout << "input here: ";
		cin >> input;
		if (!ft_strcomp(input, (char *)"ADD"))
		{
			int i = 0;
			while (book.contact->contactFilled != 0)
				i++;
			cout << "First Name here: ";
			cin >> book.contact[i].firstName;
			cout << "last Name here: ";
			cin >> book.contact[i].lastName;
			cout << "NickName here: ";
			cin >> book.contact[i].nickname;
			cout << "Phone Number  here: ";
			cin >> book.contact[i].phoneNumber;
			cout << "Darkest secret ;) here: ";
			cin >> book.contact[i].darkest_secret;
			book.contact[i].index = i;
			book.contact[i].contactFilled = 1;
		}

		else if (!ft_strcomp(input, (char *)"EXIT"))
		{
			cout << "deleting all contacts and exiting ...";
			cout << "...";
			exit(0);
		}
		else if (!ft_strcomp(input, "SEARCH"))
		{
			displayContacts(book);
		}
		else
			cout << "comand not found, please check your spelling\n";

	}

}