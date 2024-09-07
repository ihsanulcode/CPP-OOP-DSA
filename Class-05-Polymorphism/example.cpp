#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Overrides Animal's sound()
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {  // Overrides Animal's sound()
        cout << "Meow!" << endl;
    }
};

void makeSound(Animal* animal) {
    animal->sound();  // Calls the appropriate sound() function
}

int main() {
    Animal* animalPtr;
    Dog dog;
    Cat cat;

    animalPtr = &dog;
    makeSound(animalPtr);  // Outputs: Bark!

    animalPtr = &cat;
    makeSound(animalPtr);  // Outputs: Meow!

    return 0;
}
