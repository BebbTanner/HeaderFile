/*This program is used to demonstrate the use of classes and header files.
It will ask for the user's first and last name, as well as their age.*/
#include <iostream>
#include "classes.h"
using namespace std;

int main() {
	myClass C;

	/*This block is going to ask the user to input their first name*/
	cout << "Hello, please enter your first name, then press enter: " << endl;
	cin >> C.firstName;

	/*This block is going to ask the user to input their last name.*/
	cout << "Please enter your last name, then press enter: " << endl;
	cin >> C.lastName;

	/*This will output the user's first and last name. This is also 
	for me to confirm that it stored the data correctly.
	
	Finally, in this same block it will ask the user for their age.*/
	cout << "Welcome, " << C.firstName << " " << C.lastName << endl;
	cout << "The last thing I need from you is your age." << endl;
	cout << "Please enter you age: " << endl;
	cin >> C.age;


	return 0;
}