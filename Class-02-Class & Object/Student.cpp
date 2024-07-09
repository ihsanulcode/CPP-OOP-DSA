#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;
    float cgpa;

    // // Constructor
    // Student(string name, int id, float cgpa)
    // {
    //     this->name = name;
    //     this->id = id;
    //     this->cgpa = cgpa;
    // }

    void displayInfo()
    {
        cout << "Name: " << name << ", ID: " << id << ", CGPA: " << cgpa << endl;
    }
};

int main()
{
    // Creating an object of Student class
    // Syntax: ClassName objectName;
    Student student1;

    // Assigning values to the objects attributes
    student1.name = "Jon Snow";
    student1.id = 201;
    student1.cgpa = 3.8;

    // Print values by getting objects attributes
    // cout << student1.name << endl;
    // cout << student1.id << endl;
    // cout << student1.cgpa << endl;

    // call objects function
    student1.displayInfo();

    // Another Student object
    Student student2;
    student2.name = "Jon Doe";
    student2.id = 202;
    student2.cgpa = 3.3;
    student2.displayInfo();
}