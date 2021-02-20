﻿//
// Created by tosixJuly on 2021/2/20.
//

#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    // Private member data
    string Name;
    int Age;

public:
    // overloaded constructor (no default constructor)
    Human(string HumansName, int HumansAge)
    {
        Name = HumansName;
        Age = HumansAge;
        cout << "Overloaded constructor creates " << Name;
        cout << " of age " << Age << endl;
    }

    void IntroduceSelf()
    {
        cout << "I am " + Name << " and am ";
        cout << Age << " years old" << endl;
    }
};

int main()
{
    // Uncomment next line to try creating using a default constructor
    // Human FirstMan
    Human FirstMan("Adam", 30);
    Human FirstWoman("Eve", 20);

    FirstMan.IntroduceSelf();
    FirstWoman.IntroduceSelf();
}