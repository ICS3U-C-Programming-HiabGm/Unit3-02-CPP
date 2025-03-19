
#include <iostream>

//number of max studetns 
const int MAX_STUDENTS=4;

int main() {
    int numberOfStudents;
// input
    std::cout << "Enter the number of students: ";
    std::cin >> numberOfStudents;
    std::cout << ""<< std::endl;
//process and output
    if (numberOfStudents > MAX_STUDENTS) {
        std::cout << "Wrong!: ";
    }

    if (numberOfStudents == MAX_STUDENTS) {
        std::cout << "Correct!: ";
    }
}
    return 0;
