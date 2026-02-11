// Corse10 _Class&OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
public:
    string firstName;
    string LastName;
    string FullName() {
        return firstName + " " + LastName;
    }
private:
    string Alo;

};
int main()
{
    clsPerson Person1;
    Person1.firstName = "Saied Nasef";
    Person1.LastName = "Lehwtyy";
    cout << " FullName : " << Person1.FullName() << endl;


}


