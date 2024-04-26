#include<bits/stdc++.h>
using namespace std;

long long addition(long long number1, long long number2);

long long division(long long number1,long long number2);

int main(){
    long long number1, number2;
    long long result;
    char sign;

    cout<<"Enter your expression:"<<endl;

    cin>>number1>>sign>>number2;

    switch(sign){
        case '+': cout<<"The output is : "<<addition(number1,number2)<<endl;
        case '-': cout<<"The output is : "<<subtraction(number1,number2)<<endl;
        case '*': cout<<"The output is : "<<multiplication(number1,number2)<<endl;
        case '/': cout<<"The output is : "<<division(number1,number2)<<endl;
    }
}

long long addition(long long number1, long long number2){
        return number1 + number2;
}

long long division(long long number1,long long number2){
    return number1/number2;
}