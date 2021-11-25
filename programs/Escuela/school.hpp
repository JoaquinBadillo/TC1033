#include <iostream>
#include <string>
#include <vector>

#include "student.hpp"

using namespace std;

class School
{
    public:
        string name;
        vector<Student> students;

        School()
        {
            name = "";
        }

        School(string name_)
        {
            name = name_;
        }

        void addStudent(Student student)
        {
            students.push_back(student);
        }

        void showStudents(void)
        {
            for(int i = 0; i < students.size(); i++)
            {
                students[i].printStudent();
                cout << endl;
            }
        }
};