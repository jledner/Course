#include "Course.h"
#include "Textbook.h"
#include "Instructor.h"
#include <vector>
#include <string>


int main() {
    vector<Course> fall2024;
    int course_index = 0;
    char addCourse = 'Y';
    char addInfo;

    //create course with simple constructor then set instructor and textbook 
    Course myCourse = Course("Advanced C++ Programming");
    myCourse.setInstructor("Smith", "101");
    myCourse.setTextbook("C++", "Gaddis", 123);

    //create course with copy constructor
    Course myCourseCopy = myCourse;
    myCourseCopy.setInstructor("Jones", "102");

    //create instructor and textbook, then use the full constructor    
    Instructor* dataStructuresInstructor = new Instructor("Blaer", "202");
    Textbook dataStructuresTextbook = Textbook("Head first Java", "Sierra", 789);
    Course dataStructures = Course("Data Structures", dataStructuresInstructor, dataStructuresTextbook);

    // add existing three courses to Fall 2024 vector
    cout << "adding first three courses to schedule..." << endl;
    fall2024.push_back(myCourse);
    fall2024.push_back(myCourseCopy);
    fall2024.push_back(dataStructures);

    // prompt user to add courses
    while (addCourse == 'Y' || addCourse == 'y') {
        string ins;
        long isbn;
        string coursename;
        string office;
        string textbookTitle;
        string author;

        cout << "What is the name of the course? " << endl;
        getline(cin, coursename);

        // Create a new course object
        Course newCourse(coursename);

        cout << "Is there an instructor? (Y for yes)" << endl;
        cin >> addInfo;

        if (addInfo == 'Y' || addInfo == 'y') {
            cout << "Instructor name: ";
            cin.ignore();
            getline(cin, ins);
            cout << "Instructor office: ";
            getline(cin, office);
            newCourse.setInstructor(ins, office);
        }

        // Optionally add textbook info
        cout << "Is there a textbook? (Y for yes)" << endl;
        cin >> addInfo; // reusing addInfo variable

        if (addInfo == 'Y' || addInfo == 'y') {
            cout << "Textbook title: ";
            cin.ignore();
            getline(cin, textbookTitle);
            cout << "Author: ";
            getline(cin, author);
            cout << "ISBN: ";
            cin >> isbn;
            newCourse.setTextbook(textbookTitle, author, isbn);
        }

        fall2024.push_back(newCourse);
        course_index++;

        cout << "Would you like to add another course? (Y/N)" << endl;
        cin >> addCourse;
    }

    // print the courses
    cout << "Here is your schedule for Fall 2024" << endl;
    for (int i = 0; i < fall2024.size(); i++) {
        fall2024[i].print();
    }

    // print the course addresses
    cout << "----------------------" << endl;
    cout << "My Course Address: " << &myCourse << endl;
    cout << "My Course Copy Address: " << &myCourseCopy << endl;
    cout << "Data Structures Address: " << &dataStructures << endl;

    Instructor myInstructor = Instructor("Brown", "303");
    Textbook myText = Textbook("Head First Java", "Sierra", 789);
    Course thirdCourse = Course("Data Structures", &myInstructor, myText);

    cout << "----------------------" << endl;
    thirdCourse.print();

    return 0;
}