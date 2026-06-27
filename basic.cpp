// Write a program that asks for:

// Your name
// Your university
// Your semester
// Your CGPA

// Then print them nicely.

// Example output:

// Name: Jubayer
// University: Canadian University of Bangladesh
// Semester: 2nd
// CGPA: 4.00

#include <iostream>
using namespace std ;
int main () {
    string name, university;
    float cgpa;
    int semester;
    cout << "Enter Your Name ";
getline(cin, name);
    cout << "Enter Your University Name ";
getline(cin, university);
    cout << "Enter Your Semester ";
    cin >> semester;
    cout << "Enter Your CGPA ";
    cin >> cgpa;
    cout << "\n===== Student Information =====" << endl;
    cout << "Name : "  << name << endl;
    cout << "University : " << university << endl;
    cout << "semester : " << semester << endl;
    cout << "Your CGPA : " << cgpa << endl;
    return 0;

}