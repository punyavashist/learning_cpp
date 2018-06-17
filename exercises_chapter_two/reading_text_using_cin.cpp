#include <iostream>
#include <string>

	int main() {
		//Asking for the user's name
			std::cout<<"Please enter your name: ";

		//Reading their name
			std::string name; //Defines a variable name to store the user's input (their name) into.
			std::cin >> name;
			
		//Greeting the user 
			std::cout << "Hello, " << name << "!" << std::endl;
		return 0;
	}
