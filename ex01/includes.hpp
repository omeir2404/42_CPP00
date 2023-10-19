#ifndef INCLUDES_HPP
#define INCLUDES_HPP
#include <string>
#include <iostream>
using namespace std;
// ◦ The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.

/*	char	*firstName;
    char    *lastName;
    char    *nickname;
	char	*phoneNumber;
    char    *darkest_secret;*/
class Contacts{
	public:
	string  firstName;
    string  lastName;
    string  nickname;
	string	phoneNumber;
    string  darkest_secret;
    int     index;
    int     contactFilled;
};

class PhoneBook{
	public:
	class Contacts contact[8];
	
};


#endif