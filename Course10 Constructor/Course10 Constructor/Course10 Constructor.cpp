// Course10 Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsAddress {
private :
    string _AddressLine1;
    string _AddressLine2;
    string _PoBox;
    string _ZipCode;
public:

    // Constructor
    clsAddress(string AddressLine1,string AddressLine2,string PoBox,string ZipCode) {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _PoBox = PoBox;
        _ZipCode = ZipCode;
    }
    void setAddressLine1(string AddressLine1) {
        _AddressLine1 = AddressLine1;

    }
    string AddressLine1() {
        return _AddressLine1;
    }
    void setAddressLine2(string AddressLine2)
    {
        _AddressLine2 = AddressLine2;
    }
    string AddressLine2()
    {
        return _AddressLine2;
    }

    void setPoBox(string PoBox) {
        _PoBox = PoBox;
        
    }
    string PoBox() {
        return _PoBox;
    }
    void setZipCode(string ZipCode)
    {

        _ZipCode = ZipCode;

    }
    string ZipCode() {
        return _ZipCode;
    }
    void PrintResult() {
        cout << "\n========================================\n";
        cout << "Address Line1: " << _AddressLine1 << endl;
        cout << "Address Line2: " << _AddressLine2 << endl;
        cout << "Po Box       : " << _PoBox << endl;
        cout << "Zip Code     : " << _ZipCode << endl;
        cout << "========================================\n";
    }
};

int main()
{
    //لما  لغيناا ال نسخه الافتراضيه للي الكومبلير عملهاا  ملنا Overriding كده بنكون عملنا 
    clsAddress Address1("Amirica Boss","Egypt ESD","2436","tejitjgmnds");
   Address1.PrintResult();

    system("pause>0");
    return 0;

}

