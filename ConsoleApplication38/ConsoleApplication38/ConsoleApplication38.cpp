// ConsoleApplication38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsA {
public:
    static int Counter;
    int Var;
    clsA() {
        Counter++;
    }
    void PrintResult() {
        cout << "\nCounter =" << Counter << endl;
        cout << "Var       =" << Var << endl;



    }


};
class ClB {
public:
    static int Fun1() {
        return 18;
    }

    int Fun2() {
        return 11;
    }

};
int clsA::Counter = 0;
int main()
{
    
    clsA A1, A2,A3;
    A1.Var = 10;
    A2.Var = 20;
    A3.Var = 30;
    A1.PrintResult();
    A2.PrintResult();
    A3.PrintResult();
    cout << "\nStatic Function \n";
    ClB B1, B2, B3;
    cout << ClB::Fun1();
    cout << B1.Fun1() << endl;
    cout << B2.Fun2();
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
