// Course10- Get&Set Probiratis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
private:
    string _FirstName;
    string _LastName;
public:
    //propartise Set FirstName
    void setFirstName(string FirstName) {

        _FirstName = FirstName;

    }
    //propartise Get
    string FirstName() {
        return _FirstName;
    }
    //propartise Set LastName

    void SetLastName(string LastName) {
        _LastName = LastName;

    }
    //propartise Get LastName
    string LastName() {
        return _LastName;
    }
    string FullName() {
        return _FirstName + " " + _LastName;
    }

};
int main()
{
    clsPerson Person1;
    Person1.setFirstName("Saied");
    Person1.SetLastName("Nasef");
    cout << "FirstName : " << Person1.FirstName() << endl;
    cout << "Last Name: " << Person1.LastName() << endl;
    cout << "Full Name: " << Person1.FullName() << endl;
}

