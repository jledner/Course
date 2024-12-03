#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include <string>
#include <iostream>

using namespace std;

class Textbook {
private:
	string title;
	string author;
	long int isbn;
public:
	Textbook();
	Textbook(string, string, long int);
	void print();
};

#endif