// Course10 Prperatise Get&Set And (=).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clperson {
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
    __declspec(property(get = FirstName, put = setFirstName)) string kkkk;
};
int main()
{
    clperson person1;
    person1.kkkk = "Mohamed";
    cout << person1.kkkk;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
