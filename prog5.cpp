#include <iostream>

using namespace std;


class Animal {
public:
    
    virtual void sound() const = 0;
    virtual void move() const = 0;
    
   
    virtual ~Animal() 
	{
        cout << "Animal destroyed" << endl;
    }
};


class Dog : public Animal {
public:
    void sound() const override 
	{
        cout << "Dog barks: Woof Woof" << endl;
    }
    
    void move() const override 
    {
        cout << "Dog runs on four legs." << endl;
    }
    
    ~Dog() override{
        cout << "Dog destroyed" << endl;
    }
};


class Bird : public Animal {
public:
    void sound() const override 
	{
        cout << "Bird chirps: Tweet Tweet" << endl;
    }
    
    void move() const override 
	{
        cout << "Bird flies in the sky." << endl;
    }
    
    ~Bird() override 
	{
        cout << "Bird destroyed" << endl;
    }
};

int main() 
{
    int Arraysize = 2;
    int i;
    
    Animal* animals[Arraysize];
    animals[0] = new Dog();
    animals[1] = new Bird();
    
    for (i = 0; i <Arraysize  ; i++) 
	{
       animals[i]->move();
       animals[i]->sound();
    }
    
    for (i = 0; i < Arraysize ; i++) 
	{
        delete animals[i]; 
    }
    
    return 0;
}

