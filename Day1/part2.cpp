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

	int floor = 0;

	//this is abbreviated from: while(file.good()) {
	//which will read the file line by line
	//ifstream::get() gets the next character
	//ifstream::getline() will get the next line (similiar to using the >> operator)
	while(file && floor >= 0) {
		char ch = file.get();
		if(ch == '(') floor++;
		if(ch == ')') floor--;
		cout << ch << endl;
	}

	cout << "index: " << file.tellg() << endl;
	cout << "Floor: " << floor << endl;

	return 0;
}
