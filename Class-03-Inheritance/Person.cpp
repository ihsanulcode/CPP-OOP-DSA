#include <iostream>
using namespace std;

class Person
{
public:
    int id;
    string name;
    string address;
    int nid;
    virtual void PrintSummary()
    {
        cout << "Person info" << endl;
    }

protected:
    int SSN;

private:
    int cardNumber;
};