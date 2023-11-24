#include "includes.hpp"

using namespace std;

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        cout << "Enter a command (ADD, SEARCH, EXIT): ";
        cin >> command;

        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else if (command == "EXIT") {
            break;
        } else {
            cout << "Invalid command." << endl;
        }
    }

    return 0;
}