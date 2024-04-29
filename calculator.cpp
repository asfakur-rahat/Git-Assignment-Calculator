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

int main()
{
    double number1, number2;
    double result;
    char sign;

    cout << "Enter your expression:" << endl;
    cin >> number1 >> sign >> number2;

    switch (sign)
    {
    case '+':
        cout << "The output is : " << addition(number1, number2) << endl;
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
