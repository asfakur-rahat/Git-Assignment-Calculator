#include <bits/stdc++.h>
using namespace std;

template <typename T>
T addition(T number1, T number2);
template <typename T>
T subtraction(T number1, T number2);
template <typename T>
T multiplication(T number1, T number2);
template <typename T>
T division(T number1, T number2);

bool isPos(double number){
    return number>=1;
}

bool isEven(double number){
    return (int)number%2==0;
}

void formatOutput(double number1, double number2){
    cout<<"(";
    if(isEven(number1))cout<<"Even; ";
    else cout<<"Odd; ";

    if(isPos(number1)) cout<<"Positive;) + ";
    else cout<<"Negative;) + ";

    cout<<"(";
    if(isEven(number2))cout<<"Even; ";
    else cout<<"Odd; ";

    if(isPos(number2)) cout<<"Positive;) = ";
    else cout<<"Negative;) = ";

    cout<<"(";
    if(isEven(addition(number1, number2)))cout<<"Even; ";
    else cout<<"Odd; ";

    if(isPos(addition(number1, number2))) cout<<"Positive;)";
    else cout<<"Negative;) ";
}

int main()
{
    double number1, number2;
    double result;
    char sign;

    cin >> number1 >> sign >> number2;

    switch (sign)
    {
    case '+':
        cout << number1 <<" "<<"+"<<" "<<number2<<" = " <<addition(number1, number2) << endl;
        formatOutput(number1, number2);
        break;
    case '-':
        cout << "The output is : " << subtraction(number1, number2) << endl;
        break;
    case '*':
        cout << "The output is : " << multiplication(number1, number2) << endl;
        break;
    case '/':
        cout << "The output is : " << division(number1, number2) << endl;
        break;
    default:
        cout << "Wrong operand" << endl;
    }
}

template <typename T>
T addition(T number1, T number2)
{
    return number1 + number2;
}

template <typename T>
T subtraction(T number1, T number2)
{
    return number1 - number2;
}

template <typename T>
T multiplication(T number1, T number2)
{
    return number1 * number2;
}

template <typename T>
T division(T number1, T number2)
{
    if (number2 == 0)
    {
        cout << "Invalid Input" << endl;
        return -1;
    }
    return number1 / number2;
}
