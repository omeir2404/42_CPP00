#ifndef INCLUDES_HPP
#define INCLUDES_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdlib>
class Contact {
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    int phoneNumber;
    std::string darkestSecret;
};

class PhoneBook {
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int numContacts;

public:
    PhoneBook() : numContacts(0) {}

    void addContact() {
        if (numContacts >= MAX_CONTACTS) {
            // Replace the oldest contact
            for (int i = 0; i < MAX_CONTACTS - 1; i++) {
                contacts[i] = contacts[i + 1];
            }
            numContacts--;
        }

        Contact newContact;
        std::cout << "First Name: ";
        std::cin >> newContact.firstName;
        std::cout << "Last Name: ";
        std::cin >> newContact.lastName;
        std::cout << "Nickname: ";
        std::cin >> newContact.nickname;
        int valid = 0;
        while (valid != 1)
        {
            valid = 1;
            std::string temp;
            std::cout << "Phone Number: ";
            std::cin >> temp;
            for (int i = 0; i < (int)temp.length(); i++) {
                if (!isdigit(temp[i])) {
                    valid = 0;
                    std::cout << "invalid PhoneNumber\n";
                    break;
                }
            }   
            if (valid == 1)
                newContact.phoneNumber = atoi(temp.c_str());

        }
        std::cout << "Darkest Secret: ";
        std::cin.ignore();
        getline(std::cin, newContact.darkestSecret);

        contacts[numContacts] = newContact;
        numContacts++;
    }
    void searchContact() {
        if (numContacts == 0) {
            std::cout << "Phonebook is empty." << std::endl;
            return;
        }

        std::cout << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME" << "|" << std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << std::endl;
        for (int i = 0; i < numContacts; i++) {
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << truncateString(contacts[i].firstName) << "|";
            std::cout << std::setw(10) << truncateString(contacts[i].lastName) << "|";
            std::cout << std::setw(10) << truncateString(contacts[i].nickname) << std::endl;
        }

        int valid = 0;
        int index;
        while (valid != 1)
        {
            std::cout << "Enter the index of the contact to display: ";
            std::string temp;
            std::cin >> temp;
            valid = 1;
            for (int i = 0; i < (int)temp.length(); i++) {
                if (!isdigit(temp[i])) {
                    valid = 0;
                    std::cout << "invalid Index\n";
                    break;
                }
            }   
            if (valid == 1)
                index = atoi(temp.c_str());

        }


        if (index >= 0 && index < numContacts) {
            std::cout << "First Name: " << contacts[index].firstName << std::endl;
            std::cout << "Last Name: " << contacts[index].lastName << std::endl;
            std::cout << "Nickname: " << contacts[index].nickname << std::endl;
            std::cout << "Phone Number: " << contacts[index].phoneNumber << std::endl;
            std::cout << "Darkest Secret: " << contacts[index].darkestSecret << std::endl;
        } else {
            std::cout << "Invalid index." << std::endl;
        }
    }

private:
    std::string truncateString(const std::string& str) {
        if (str.length() > 10) {
            return str.substr(0, 9) + ".";
        }
        return str;
    }
};

#endif