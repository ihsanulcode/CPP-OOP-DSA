#include <iostream>
using namespace std;

template <typename T>
class Calculator{
public:
    T add(T a, T b){
        return a+b;
    }
    T sub(T a, T b){
        return a-b;
    }
    T mul(T a, T b){
        return a*b;
    }
};

int main(){
    Calculator<int> calcA;

    cout << "Int add:" << calcA.add(1,2) << endl;
    cout << "Int sub:" << calcA.sub(2,1) << endl;
    cout << "Int mul:" << calcA.mul(3,2) << endl;

    Calculator<float> calcB;

    cout << "float add:" << calcB.add(1.5,2.5) << endl;
    cout << "float sub:" << calcB.sub(2.5,1.5) << endl;
    cout << "float mul:" << calcB.mul(3.5,2.5) << endl;
}