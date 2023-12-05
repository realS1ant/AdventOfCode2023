#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {

	//this,
	ifstream file;
	// file.open("input.txt");
	file.open("test_input.txt");

	//ifstream::get() gets the next character
	//std::getline(file, string) will get the next line (similiar to using the >> operator)
	//ifstream::tellg() will give you the current position of the pointer
	
	//this is abbreviated from: while(file.good()) {
	//which will read the file line by line
	string line;
	std::map<string, int> n;
	n["one"] = 1;
	n["two"] = 2;
	n["three"] = 3;
	n["four"] = 4;
	n["five"] = 5;
	n["six"] = 6;
	n["seven"] = 7;
	n["eight"] = 8;
	n["nine"] = 9;
	int sum = 0;
	while(file.good()) {
		file >> line;
		int first = NULL, last = NULL;
		string chars = "";
		for(int i = 0; i < str.length(); i++) {
			char ch = str[i];
			int digit;
			if(isdigit(ch)) {
				digit = ch - '0'; 
			} else {
				chars.append(ch);
				cout << chars << " " << n.find(chars) << endl;
				// cout << n.find(chars);
			}
		}
		cout << "first: " << first << " last: " << last << endl;
		cout << "digit: " << 10*first + last << endl;
		sum += 10*first + last;
	}

	cout << "Sum: " << sum << endl;

	return 0;
}
