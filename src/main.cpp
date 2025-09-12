#include "greeting_utils.h" 
#include <string>
#include <iostream>

using std::string, std::cout, std::cin, std::getline, std::endl;
using GreetingUtils::create_message, GreetingUtils::format_as_c_string;

int main() {
	cout << "Please enter your full name" << endl;
	string name;
	getline(cin, name);
	string greeting = create_message(name);
	char* cGreeting = format_as_c_string(greeting);
	cout << cGreeting << endl;
	return 0;	
}


