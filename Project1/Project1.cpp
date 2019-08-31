

#include <iostream>
#include "Header.h"
#include <fstream>


int main()
{
	std::fstream myfile;
	Credentials user;
	std::string newuser, check_user, check_password, again;
	int i = 0, y=0;

	while (i == 0) {

		std::cout << "New User? (y/n)\n";
		std::cin >> newuser;
	

	
		if (newuser == "y") {
			std::cout << "Enter Username: ";
			std::cin >> user.username;
			std::cout << "Enter Password: ";
			std::cin >> user.password;

			if (user.check_username()) {
				std::cout << "Username already exists!\n";
				
			}

			else {
				user.add_username();
				i++;
			}
		}
		else {
			i++;
		}
	}

	
	while (y == 0) {

		std::cout << "Enter Usesrname: ";
		std::cin >> check_user;
		std::cout << "Enter Password: ";
		std::cin >> check_password;

		if (user.check_unlock(check_user, check_password)) {
			std::cout << "Congrats! You're in!\n";
			y++;
		}

		else {
			std::cout << "Username and/or password incorrect\nTry again? (y/n)\n";
			std::cin >> again;

			if (again == "y") {

			}
			else {
				y++;
			}
		}
	}
	
}

