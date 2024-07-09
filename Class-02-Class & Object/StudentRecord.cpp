#include <iostream>
using namespace std;

class StudentRecord
{
private:
    string name;
    int id;
    float cgpa;

public:
    // Constructor
    StudentRecord(string name, int id, float cgpa)
    {
        this->name = name;
        this->id = id;
        this->cgpa = cgpa;
    }

    // Destructor
    ~StudentRecord()
    {
        cout << "Object Removed!" << endl;
    }

    // Getter function for Cgpa
    float getCgpa()
    {
        return this->cgpa;
    }

    // Setter function for Cgpa
    void setCgpa(float cgpa)
    {
        this->cgpa = cgpa;
    }

    void displayInfo()
    {
        cout << "Name: " << name << ", ID: " << id << ", CGPA: " << cgpa << endl;
    }
};

int main()
{
    // Creating an object of Student class
    // Syntax: ClassName objectName;
    StudentRecord student1("Jon Snow", 201, 3.8);

    // call objects function
    student1.displayInfo();

    // Another Student object
    StudentRecord student2("Jon Doe", 202, 3.3);
    student2.displayInfo();

    // Modify student2 attributes
    student2.setCgpa(3.5);
    cout << "Cgpa Changed to: " << student2.getCgpa() << endl;
    student2.displayInfo();
}