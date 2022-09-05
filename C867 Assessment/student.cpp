#include <string>
#include <iostream>
#include "student.h"
using namespace std;

// Section D1
Student::Student() {
	sUID = "";
	Fname = "";
	Lname = "";
	email = "";
	age = 0;
	this->daysInCourse = new int[3];
}

Student::Student(string sUID, string Fname, string Lname, string email, int age, int dIC1, int dIC2, int dIC3, DegreeProgram type) {
	this->sUID = sUID;
	this->Fname = Fname;
	this->Lname = Lname;
	this->email = email;
	this->age = age;
	this->daysInCourse = new int[3];
	daysInCourse[0] = dIC1;
	daysInCourse[1] = dIC2;
	daysInCourse[2] = dIC3;
}

Student::~Student() {

}


//D2a - define accessors
string Student::GetsUID() {
	return sUID;
}

string Student::GetFname() {
	return Fname;
}

string Student::GetLname() {
	return Lname;
}

string Student::Getemail() {
	return email;
}

int Student::GetAge() {
	return age;
}

int* Student::GetDaysInCourse() {
	return daysInCourse;
}

DegreeProgram Student::GetDegreeProgram() {
	return degreeProgram;
}

//D2b - define mutators
void Student::SetsUID(string sUID) {
	this->sUID = sUID;
	return;
}

void Student::SetFname(string Fname) {
	this->Fname = Fname;
	return;
}

void Student::SetLname(string Lname) {
	this->Lname = Lname;
	return;
}

void Student::Setemail(string email) {
	this->email = email;
	return;
}

void Student::SetAge(int age) {
	this->age = age;
	return;
}

void Student::SetDaysCourseComplete(int* dIC) {
	daysInCourse[0] = dIC[0];
	daysInCourse[1] = dIC[1];
	daysInCourse[2] = dIC[2];
	return;
}

// Section D2e - print specific student data
void Student::print() {
	int* tempdays = GetDaysInCourse();
	string dPStr = "Software";
	cout << dPStr << "\n";
	 if (GetDegreeProgram() == DegreeProgram::SOFTWARE) dPStr = "Network";
	 if (GetDegreeProgram() == DegreeProgram::NETWORK) dPStr = "Network";
	cout << dPStr<<"\n" ;
	if (GetDegreeProgram() == DegreeProgram::SECURITY) dPStr = "Security";
	cout << dPStr <<"\n";
	cout << "\t Student ID: " << GetsUID()
		<< "\t First Name: " << GetFname()
		<< "\t Last Name: " << GetLname()
		<< "\t Student Age: " << GetAge();
	cout << "\t Days In Course: {" << tempdays[0] << ", " << tempdays[1] << ", " << tempdays[2] << "}";
	cout << "\t Degree Program: " << dPStr << "." << endl;
}