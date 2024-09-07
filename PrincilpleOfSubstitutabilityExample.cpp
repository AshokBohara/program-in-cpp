//example of substitution in cpp programming language
#include<iostream>
using namespace std;

class Animal 
{
public:
    virtual void sound() 
	{
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal 

{
public:
    void sound() override 
	{
        cout << "Bark" << endl;
    }
};

class Cat : public Animal 

{
public:
    void sound() override 
	{
        cout << "Meow" << endl;
    }
};

void makeAnimalSound(Animal* a) 

{
    a->sound();  // This should work with any derived class
}

int main() 
{
    Animal* animal = new Animal();
    Dog* dog = new Dog();
    Cat* cat = new Cat();

    makeAnimalSound(animal);  // Outputs: Some generic animal sound
    makeAnimalSound(dog);     // Outputs: Bark
    makeAnimalSound(cat);     // Outputs: Meow

    delete animal;
    delete dog;
    delete cat;
    return 0;
}

