#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include <iostream>

using namespace std;

class Instructor {
private:
	string name;
	string office;
public:
	Instructor(string, string);
	string getName() { return name; }
	string getOffice() { return office; }
	void print();
};

#endif