#include <iostream>
using namespace std;

class Base {
    public:
    virtual void show(){
        cout << "Calling from the base class!" << endl;
    }

    void calculate(int a, int b){
        cout << a+b << endl;
    }

    void calculate(float a, float b){
        cout << a+b << endl;
    }

    void calculate(int a, int b, int c){
        cout << a+b+c << endl;
    }
};

class Derived : public Base {
    public:
    void show() override {
        cout << "Calling from the derived class!" << endl;
    }
};

int main(){
    Base* baseObj;
    Derived derivedObj;
    baseObj = &derivedObj;

    baseObj->show();

    return 0;
}