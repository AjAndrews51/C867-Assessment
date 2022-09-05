// C867 Assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "roster.h"

using namespace std;

int main() {

	//Print out header information; course name and information as well as student ID and name.

	cout << "C867 Assessment \n Coding Langauge: C++ \n SUID #:001023776 \n Name: AJ Andrews";
 


	Roster* classRoster = new Roster();   //create classRoster, add each student to classRoster


	classRoster->printAll();



	classRoster->printInvalidEmails();

	for (int i = 0; i < 5; ++i) { //loop through printAverageDaysInCourse()
		Student s = classRoster->findStudent(i);
		classRoster->printAverageDaysInCourse(s.GetsUID());
	}

	classRoster->remove("A3");

	classRoster->printAll();

	classRoster->remove("A3");

	char exitSign = 'a';
	while (exitSign != 'x') {


		cout << endl << "enter 'x' to quit...";
		cin >> exitSign;
		cout << endl << endl;
	}

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
