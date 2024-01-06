
      //develop simple calculator using switch statement

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char option;
    cout<<"enter the two number:"<<endl;
    cin>>num1>>num2;
    cout<<"enter the options(+,-,*,/):";
    cin>>option;
    switch(option){
        case '+':
        cout<<num1 + num2<<endl;
        break;

        case '-':
        cout<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1/num2<<endl;
        break;

        default:
        cout<< "your option is wrong.please try again!";
        break; 
    }
    cout<<"thank you";
    return 0;
}



