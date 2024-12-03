#include "Instructor.h"
#include <iostream>
#include <string>

using namespace std;

Instructor::Instructor(string name, string office) {
	this->name = name;
	this->office = office;
}


void Instructor::print() {
	cout << "Instructor" << endl;
	cout << "\tName:\t" << name << endl;
	cout << "\tOffice:\t" << office << endl;
}
