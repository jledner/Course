#include "Textbook.h"
#include <iostream>
#include <string>

using namespace std; 

Textbook::Textbook():Textbook("n/a", "n/a", 0) {}

Textbook::Textbook(string title, string author, long int isbn) {
	this->title = title;
	this->author = author;
	this->isbn = isbn;
}

void Textbook::print() {
	cout << "Textbook" << endl;
	cout << "\tTitle:\t" << title << endl;
	cout << "\tAuthor:\t" << author << endl;
	cout << "\tISBN:\t" << isbn << endl;
}