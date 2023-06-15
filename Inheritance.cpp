#include <iostream>

using namespace std;

class Pet
{
protected:
    char name[30];
    char characteristic[30];
public:
    Pet(const char name[],
        const char characteristic[]
        )
    {
        strcpy_s(this->name, name);
        strcpy_s(this->characteristic, characteristic);
    }

    Pet()
    {}

    void info()
    {
        cout << "Name: " << this->name << endl << "Characteristic: " << this->characteristic << endl;
        cout << "--------------------------" << endl;
    }

    ~Pet()
    {}
};


class Dog : public Pet
{
private:
    Pet pets;
public:
    Dog(const char name[],
        const char characteristic[]
        )
    {
       pets =  Pet(name, characteristic);
       pets.info();
    }

    Dog()
    {}
};

class Cat : public Pet
{
private:
    Pet pets;
public:
    Cat(const char name[],
        const char characteristic[])
    {
       pets = Pet(name, characteristic);
       pets.info();
    }

    Cat()
    {}
};

class Bird : public Pet
{
private:
    Pet pets;
public:
    Bird(const char name[],
        const char characteristic[])
    {
        pets = Pet(name, characteristic);
        pets.info();
    }

    Bird()
    {}
};

int main()
{
    Dog dog("Dog", "gav - gav");
    Bird bird("Bird", "crik - crik");
    Cat cat("Cat", "mau");
}

