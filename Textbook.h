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
	string getTitle() { return title; }
	string getAuthor() { return author; }
	long getISBN() { return isbn; }
	void print();
};

#endif