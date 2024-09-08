#include <iostream>
using namespace std;

// A simple template function that finds the max for me
template <typename T>
T findMax(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    cout << "Max of 10 and 20 is " << findMax(10,20) << endl;
    cout << "Max of 3.5 and 2.5 is " << findMax(3.5,2.5) << endl;
}