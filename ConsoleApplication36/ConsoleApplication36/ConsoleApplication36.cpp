// ConsoleApplication36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
private :
    int Variable1 = 20;
    int Function1() {
        return Variable1 * 10;
    }
protected:
    int Variable2 = 34;
    int Function2() {

        return Variable2;

    }
public:
    string FunllName() {
        return "Saied";
    }
    int Function3() {
        return Function2() + Function1() + 10;
    }
    
};
int main()
{
    clsPerson Person1;
    cout << Person1.FunllName();
    string s;
    s.
}

