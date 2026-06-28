#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int semester;
    float cgpa;
};

int main()
{
    student s1;
    s1.name = "Jubayer";
    s1.semester = 1;
    s1.cgpa = 4.00;

    cout << "Student Name : " << s1.name << endl;
    cout << "Semester : " << s1.semester << endl;
    cout << "CGPA : " << s1.cgpa << endl;
    return 0;
}