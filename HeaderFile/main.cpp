/*This program is used to demonstrate the use of classes and header files.
It will ask for the user's first and last name, as well as their age.*/
#include <iostream>
#include "classes.h"
using namespace std;

void userInfo();

int main() {
	char userResponse;
	
	/*This was in the main function, but I decided to add it to a 
	seperate function to make it look a little cleaner.*/
	userInfo();

	/*This will ask the user to confirm their age. If it is not correct 
	I will be adding something to repeat the process*/
	cout << "Is this the correct information?(Y or N): " << endl;
	cin >> userResponse;

	/*This is an if-else statemen that will repeat the function
	to allow the user to re-enter their information.*/
	if (userResponse != 'y' || userResponse != 'Y') {
		cout << "Lets try again. " << endl;
		userInfo();
	}

	return 0;
}

void userInfo() {
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
	cout << "The last thing I need from you is your age. Please enter your age: " << endl;
	cin >> C.age;

	/*This statement is going to print out all of the information to the user.*/
	cout << "The final information that you have added is: "
		<< C.firstName << " " << C.lastName << " " << C.age << endl;
}