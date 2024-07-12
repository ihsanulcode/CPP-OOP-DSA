#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    Student s1;
    s1.name = "John";
    s1.id = 2001;
    s1.cgpa = 3.33;
    s1.address = "DHAKA";
    s1.nid = 234342;
    s1.PrintSummary();
}