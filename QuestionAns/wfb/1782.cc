#include <iostream>

using namespace std;

class Animal{
public:
    Animal(string n) : name_(n) {}
    virtual void sound() const = 0;
protected:
    string name_;
};
class Cock : public Animal{
public:
    Cock(string n) : Animal(n){}
    void sound() const {cout<<name_<<" is a cock, and it can crow."<<endl;}
};
class Turkey : public Animal{
public:
    Turkey(string n) : Animal(n){}
    void sound() const {cout<<name_<<" is a turkey, and it can gobble."<<endl;}
};
class Duck : public Animal{
public:
    Duck(string n) : Animal(n){}
    void sound() const {cout<<name_<<" is a duck, and it can quack."<<endl;}
};
int main()
{
    int cases;
    string name;
    char type;
    Animal *animal;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
       cin>>name>>type;
       switch(type)
       {
        case 'A':
            animal = new Duck(name);
            break;
        case 'B':
            animal = new Turkey(name);
            break;
        case 'C':
            animal = new Cock(name);
            break;
       }
       animal->sound();
    }
    return 0;
}
/**************************************************************
	Problem: 1782
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

