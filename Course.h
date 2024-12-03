#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
#include "Instructor.h"
#include "Textbook.h"

using namespace std;

class Course
{
private:
    string courseName;
    Instructor* inst = nullptr;
    Textbook text;
public:
    Course(string);
    Course(const Course &);
    const Course& operator=(const Course&);
    void setInstructor(string, string);
    void setTextbook(string, string, long);
    void removeInstructor();
    void removeTextbook();
    void print();
    ~Course();
};

#endif