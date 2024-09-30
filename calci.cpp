#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter num 1"<<endl;
    cin>>num1;
    cout<<"Enter num 2"<<endl;
    cin>>num2;

    char op;
    cout<<"Enter the operation you want to perform:"<<endl;
    cin>>op;

    switch(op){
        case '+' : cout<<(num1+num2)<<endl;
        break;

        case '-' : cout<<(num1-num2)<<endl;
        break;

        case '*' : cout<<(num1*num2)<<endl;
        break;

        case '/' : cout<<(num1/num2)<<endl;
        break;
    }

}