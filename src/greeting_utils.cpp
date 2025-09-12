#include "greeting_utils.h"
#include <string>

using std::string;

namespace GreetingUtils {
	string create_message(const string& name) {
		return "Hello, " + name + '!';
	}

	char* format_as_c_string(const string& msg) {
		int length = msg.size();
		char* cString = new char[length+1];
		for (int i =0; i<length; i++) {
			cString[i] = msg[i];
		}
		cString[length+1] = '\0';
		return cString;
	}
}
