/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student s;

    cout << "Enter Roll No: ";
    cin >> s.rollNo;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);

    cout << "Student Added Successfully!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    cout << "\nStudent Records:\n";

    for (int i = 0; i < students.size(); i++) {
        cout << "Roll No: " << students[i].rollNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << "------------------\n";
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll No to search: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            cout << "Student Found!\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Marks: " << students[i].marks << endl;
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}