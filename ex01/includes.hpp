#ifndef INCLUDES_HPP
#define INCLUDES_HPP
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Contact {
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
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
        cout << "First Name: ";
        cin >> newContact.firstName;
        cout << "Last Name: ";
        cin >> newContact.lastName;
        cout << "Nickname: ";
        cin >> newContact.nickname;
        cout << "Phone Number: ";
        cin >> newContact.phoneNumber;
        cout << "Darkest Secret: ";
        cin.ignore();
        getline(cin, newContact.darkestSecret);

        contacts[numContacts] = newContact;
        numContacts++;
    }
    void searchContact() {
        if (numContacts == 0) {
            cout << "Phonebook is empty." << endl;
            return;
        }

        cout << setw(10) << "INDEX" << "|" << setw(10) << "FIRST NAME" << "|" << setw(10) << "LAST NAME" << "|" << setw(10) << "NICKNAME" << endl;
        for (int i = 0; i < numContacts; i++) {
            cout << setw(10) << i << "|";
            cout << setw(10) << truncateString(contacts[i].firstName) << "|";
            cout << setw(10) << truncateString(contacts[i].lastName) << "|";
            cout << setw(10) << truncateString(contacts[i].nickname) << endl;
        }

        int index;
        cout << "Enter the index of the contact to display: ";
        cin >> index;

        if (index >= 0 && index < numContacts) {
            cout << "First Name: " << contacts[index].firstName << endl;
            cout << "Last Name: " << contacts[index].lastName << endl;
            cout << "Nickname: " << contacts[index].nickname << endl;
            cout << "Phone Number: " << contacts[index].phoneNumber << endl;
            cout << "Darkest Secret: " << contacts[index].darkestSecret << endl;
        } else {
            cout << "Invalid index." << endl;
        }
    }

private:
    string truncateString(const string& str) {
        if (str.length() > 10) {
            return str.substr(0, 9) + ".";
        }
        return str;
    }
};

#endif