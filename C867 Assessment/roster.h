#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include "student.h"
using namespace std;

// Section E1 - Define Roster class
class Roster {
public:
	Roster();
	~Roster();
	//Section E3a-e required functions
	void add(string sUID, string Fname, string Lname, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram type);
	void remove(string sUID);
	void printAll();
	void printAverageDaysInCourse(string sUID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram type);
	Student findStudent(int Index);
private:
	int lastIndex;
	int maxSize;
	Student* classRosterArray;

};

#endif