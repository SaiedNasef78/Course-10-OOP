// Course10 ReadOnly Properaty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
private:
    int _ID = 20;
    string _FirstName;
    string _LastName;
public:
    //property set
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }
    //properaty Get FirstName
    string FirstName() {
        return _FirstName;
    }


    //property set LastName
    void setLastName(string LastName) {
        _LastName = LastName;
    }
    //properaty Get LastName
    string LastName() {
        return _LastName;
}
    string FullName() {
        return _FirstName + " " + _LastName;
    }

    // ReadOnly Because We have Dont setPropearty
   int  ID() {
        return _ID;
    }
};
int main()
{
    clsPerson Person1;
    Person1.setFirstName("Saied");
    Person1.setLastName("Nasef");
    cout << "FullName: " << Person1.FullName() << endl;
    cout << "ID: " << Person1.ID();
}

