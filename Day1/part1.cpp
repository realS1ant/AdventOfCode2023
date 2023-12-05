#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	//this,
	ifstream file;
	file.open("input.txt");
	// file.open("test_input.txt");
	//or
	//ifstream file ("input.txt");

	string str;
	
	//ifstream::get() gets the next character
	//std::getline(file, string) will get the next line (similiar to using the >> operator)
	//ifstream::tellg() will give you the current position of the pointer
	
	//this is abbreviated from: while(file.good()) {
	//which will read the file line by line
	int sum = 0;
	while(file.good()) {
		file >> str;
		int first = NULL, last = NULL;
		for(int i = 0; i < str.length(); i++) {
			char ch = str[i];
			if(isdigit(ch)) last = ch - '0';
			if(!first) first = last; 
		}
		cout << "first: " << first << " last: " << last << endl;
		cout << "digit: " << 10*first + last << endl;
		sum += 10*first + last;
	}

	cout << "Sum: " << sum << endl;

	return 0;
}
