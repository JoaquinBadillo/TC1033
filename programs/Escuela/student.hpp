#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:
        string id;
        string name;
        int age;
        string degree;

        // Default constructor
        Student()
        {
            id = " ";
            name = " ";
            age = 0;
            degree = " ";
        }

        Student(string id_, string name_, int age_, string degree_)
        {
            setId(id_);
            setName(name_);
            setAge(age_);
            setDegree(degree_);
        }

        // Getters
        string getId(void)
        {
            return id;
        }

        string getName(void)
        {
            return name;
        }

        int getAge(void)
        {
            return age;
        }

        string getDegree(void)
        {
            return degree;
        }

        // Setters
        void setId(string id_)
        {
            // Alumni IDs start with A
            if(id_[0] == 'A')
            {
                id = id_;
            }
            else
            {
                id = " ";
            }
        }

        void setName(string name_)
        {
            name = name_;
        }

        void setAge(int age_)
        {
            if  (age_ > 0)
            {
                age = age_;
            }
            else
            {
                age = 0;
            }
        }

        void setDegree(string degree_)
        {
            degree = degree_;
        }

        // Print
        void printStudent()
        {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Degree: " << degree  << endl;
        }
};