#pragma once
#include <fstream>
#include <string>
class Credentials {
	std::string database, x;
	

public:
	std::string username, password;
	std::fstream userfile;
	int offset;

	bool chkuser;
	

	bool check_username() {

		userfile.open("Usernames.txt");
		while (userfile >> x) {
			database += x + " ";
		}
		
		std::size_t found = database.find(username);
		userfile.close();
		if( found != std::string::npos){
			return true;
		}
		else {
			return false;
		}
		

	}
	
	bool check_unlock(std::string a, std::string b) {

		userfile.open("Usernames.txt");
		while (userfile >> x) {
			database += x + " ";
		}

		std::size_t found = database.find(a + "*" + b);
		userfile.close();
		if (found != std::string::npos) {
			return true;
		}
		else {
			return false;
		}

	}

	void add_username() {
		userfile.open("Usernames.txt",std::ofstream::app);
		userfile << "\n" << username << "*" << password << "\n";
		userfile.close();
	}
	
};
