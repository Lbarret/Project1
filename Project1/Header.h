#pragma once
#include <fstream>
#include <string>
class Credentials {

	

public:
	std::string username, password;
	std::fstream userfile;
	int offset;
	bool chkuser;
	

	bool check_username() {

		userfile.open("Usernames.txt");
		std::getline(userfile, username);
		if ((offset = username.find(username, 0)) != std::string::npos) {
			chkuser = true;
		}

	}
	void add_username() {
		userfile.open("Usernames.txt");
		userfile << username << "\n" << password;
		userfile.close();
	}
	
};
