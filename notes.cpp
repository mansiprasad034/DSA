#include<iostream>
using namespace std;
int main()
{

    int hundereds, fifties, twenties, tens;

    int amount = 1330;

    hundereds = amount/100;
    amount = amount % 100;

    switch(amount/50)
    {
        case 1: fifties = amount/50;
        amount = amount % 50;
        break;
        default: 
        fifties = 0;
    }

    switch(amount/20){
        case 1: twenties = amount/20;
        amount = amount%20;
        break;
        default:
        twenties = 0;
    }

    switch(amount/10)
    {
        case 1: tens = amount/10;
        amount = amount%10;
        break;
        default:
        tens = 0;
    }

    cout << "100 rupee notes: " << hundereds << endl;
    cout << "50 rupee notes: " << fifties << endl;
    cout << "20 rupee notes: " << twenties << endl;
    cout << "10 rupee notes: " << tens << endl;

    return 0;

}