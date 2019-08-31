#pragma once
#include <fstream>
#include <string>
class Credentials {

	

public:
	std::string username, password, database;
	std::fstream userfile;
	int offset;

	bool chkuser;
	

	bool check_username() {

		userfile.open("Usernames.txt");
		userfile >> database;
		std::size_t found = database.find(username);
		userfile.close();
		if( found != std::string::npos){
			return true;
		}
		else {
			return false;
		}

	}
	void add_username() {
		userfile.open("Usernames.txt",std::ofstream::app);
		userfile << "\n" << username << "\n" << password;
		userfile.close();
	}
	
};
