#include<bits/stdc++.h>
using namespace std;
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