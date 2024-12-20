#include "Course.h"

Course::Course(string c) : courseName(c), inst(nullptr), text("", "", 0) {}

Course::Course(string c, Instructor* i, Textbook t) {
    courseName = c;
    if (i != nullptr) {
        inst = new Instructor(i->getName(), i->getOffice());
    }
    text = Textbook(t.getTitle(), t.getAuthor(), t.getISBN());
}

Course::Course(const Course& c) : courseName(c.courseName), inst(nullptr), text(c.text) {
    if (c.inst != nullptr) {
        inst = new Instructor(c.inst->getName(), c.inst->getOffice());
    }
}

const Course& Course::operator=(const Course& c) {
    if (this != &c) {
        this->courseName = c.courseName;
        this->text = c.text;

        delete inst;
        inst = nullptr;

        if (c.inst != nullptr) {
            inst = new Instructor(c.inst->getName(), c.inst->getOffice());
        }
    }
    return *this;
}

void Course::setInstructor(string n, string o) {
    if (inst != nullptr) {
        delete inst;
    }
    inst = new Instructor(n, o);
}

void Course::setTextbook(string t, string a, long isbn) {
    text = Textbook(t, a, isbn);
}

void Course::removeInstructor() {
    if (inst != nullptr) {
        delete inst;
        inst = nullptr;
    }
}

void Course::removeTextbook() {
    text = Textbook();
}

void Course::print() {
    cout << "Course Name: " << courseName << endl;
    if (inst == nullptr)
        cout << "Name: TBA" << endl;
    else
        inst->print();
    text.print();

}

Course::~Course() {
    delete inst;
}