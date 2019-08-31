

#include <iostream>
#include "Header.h"
#include <fstream>


int main()
{
	std::ofstream myfile;
	Credentials user;
	std::string newuser, check_user, check_password;

	std::cout << "New User? (y/n)";
	std::cin >> newuser;

	if (newuser == "y") {
		std::cout << "Enter Usesrname: ";
		std::cin >> user.username;
		std::cout << "Enter Password: ";
		std::cin >> user.password;
		


		user.add_username();

	}
	
	else{
		std::cout << "Enter Usesrname: ";
		std::cin >> check_user;
		std::cout << "Enter Password: ";
		std::cin >> check_password;

		if (user.check_username()) {
			std::cout << "Congrats! You're in!\n";
			i++;
		}

		else {
			std::cout << "Sorry, please try again\n";
		}
	}
}

