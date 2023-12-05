#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	//this,
	ifstream file;
	file.open("input.txt");
	//or
	//ifstream file ("input.txt");

	string str;

	//this is abbreviated from: while(file.good()) {
	//which will read the file line by line
	//ifstream::get() gets the next character
	//ifstream::getline() will get the next line (similiar to using the >> operator)
	//ifstream::tellg() will give you the current position of the pointer
	while(file) {
		getline(file, str);
		cout << str << endl;
	}

	return 0;
}
