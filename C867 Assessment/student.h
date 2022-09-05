#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

// Section D1 - Define Student class

class Student {
public:
	Student();
	// Section D2d - constructor using all of the input params
	Student(string sUID, string Fname, string Lname, string email, int age,
		int dIC1, int dIC2, int dIC3, DegreeProgram type);
	~Student();
	// Section D2a - declare accessors
	string GetsUID();
	string GetFname();
	string GetLname();
	string Getemail();
	int GetAge();
	int* GetDaysInCourse();
	DegreeProgram GetDegreeProgram();
	// Section D2b - declare mutators
	void SetsUID(string sUID);
	void SetFname(string Fname);
	void SetLname(string Lname);
	void Setemail(string email);
	void SetAge(int age);
	void SetDaysCourseComplete(int* daysInCourse);
	void dtype(string type);
	// Section D2e - print specific student data
	void print();
private:
	string sUID;
	string Fname;
	string Lname;
	string email;
	int age;
	int* daysInCourse;
	DegreeProgram degreeProgram;
};

#endif