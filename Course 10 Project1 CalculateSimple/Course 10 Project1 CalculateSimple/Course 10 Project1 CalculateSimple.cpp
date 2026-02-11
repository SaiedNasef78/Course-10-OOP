// Course 10 Project1 CalculateSimple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsCalculator {
private :
    float _Result = 0;
    float _LastNumber = 0;
    float _previousResult = 0;
    string _LastOperation = "Clear";

    bool _IsDivide(float Number) {
        return Number == 0;
    }

public:
    void Add(float Number) {
        _LastNumber = Number;
        _previousResult = _Result;
        _Result += Number;
        _LastOperation = "Adding";
    }
    void Subtract(float Number) {
        _LastNumber = Number;
        _previousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;


    }
    void Multiply(float Number) {
        _LastNumber = Number;
        _previousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= Number;

    }
    void Divide(float Number) {
        if (_IsDivide(Number))
            Number = 1;
        _LastNumber = Number;
        _previousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= Number;
    }

    void Clear() {
         _Result = 0;
         _LastNumber = 0;
         _previousResult = 0;
        _LastOperation = "Clear";
    }
    float GetFinalResult() {
        return _Result;
    }

    void PrintResult() {

        cout << "Result After " << _LastOperation << " " << _LastNumber << " Is: " << _Result << endl;

    }
    void CancelFinalResult() {
        _Result = 0;
        _LastNumber = 0;
        _Result = _previousResult;
        _LastOperation = "Cancel FinalResult";

}
};
int main()
{
    clsCalculator Calculator1;
    
    Calculator1.Clear();
    Calculator1.PrintResult();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtract(20);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Divide(2);
    Calculator1.PrintResult();
    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    Calculator1.CancelFinalResult();
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();
    system("pause>0");
    return 0;
}

