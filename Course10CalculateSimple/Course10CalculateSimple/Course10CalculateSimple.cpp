// Course10CalculateSimple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsCalculator {
private:
    int _Result=0;
public :
    void Adding(int Number) {
        _Result += Number;
        cout << "Result After Addding " << Number << " is: ";
    }

    void Clear() {
        _Result = 0;
        cout << "Result After Clear 0 is: ";
    }
    void Subtracting(int Number ) {
        _Result -= Number;
        cout << "Result After Subtracting " << Number << " is: ";

    }
    void Divide(int Number ) {
        if (Number == 0) {
            _Result /= 1;
            Number = 1;
        }
        else {
            _Result /= Number;
        }
        cout << "Result After  Dividing " << Number << " is: ";
    }
    void Multiply(int Number)
    {
        _Result *= Number;

cout << "Result After  Multiplying " << Number << " is: ";
    }
    void PrintResult() {
        cout << _Result << endl;
       
    }

};
int main()
{
    clsCalculator Calculator1;
    Calculator1.Clear();
    Calculator1.PrintResult();

    Calculator1.Adding(10);
    Calculator1.PrintResult();
   
    Calculator1.Adding(100);
    Calculator1.PrintResult();

    Calculator1.Subtracting(20);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Divide(2);
    Calculator1.PrintResult();
    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();
    system("pause>0");
    return 0;
    
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
