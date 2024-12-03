#include "Course.h"
#include "Textbook.h"
#include "Instructor.h"

int main(){
    Course myCourse = Course("test");
    myCourse.setInstructor("Smith", "101");
    myCourse.setTextbook("C++", "Gaddis", 123);
    myCourse.print();

    cout << "----------------------" << endl;

    Course myCourseCopy = myCourse;
    myCourseCopy.setInstructor("Jones","102");
    myCourseCopy.print();

    cout << "----------------------" << endl;
    cout << "My Course Address: " << &myCourse << endl;
    cout << "My Course Copy Address: " << &myCourseCopy << endl;

    return 0;
}