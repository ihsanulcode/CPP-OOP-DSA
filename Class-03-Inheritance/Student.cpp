#include <iostream>
#include "Person.cpp"
using namespace std;

class Student : public Person
{
public:
    float cgpa;
    void PrintSummary() override
    {
        cout << "Name: " << this->name << endl;
        cout << "ID: " << this->id << endl;
        cout << "CGPA: " << this->cgpa << endl;
        cout << "Address: " << this->address << endl;
        cout << "NID No.: " << this->nid << endl;
    }
};