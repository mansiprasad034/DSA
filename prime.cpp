//Prime number

#include<iostream>
using namespace std;
/*
int main()
{
    int i=2;
    int n;
    bool isPrime = true;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<n)
    {
        //num gets divided
        if(n % i == 0)
        {
            isPrime = false;
        }
        else{
            isPrime = true;
        }
        i= i+1;
    }
    if(isPrime = true)
    {
        cout<<"The number is  Prime"<<endl;
    }
    else{
        cout<<"The number is not  Prime";
    }
}
*/

bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    isPrime(n);
    if(isPrime(n))
    {
        cout<<"Is a Prime Number";
    }
    else{
        cout<<"Is not a Prime number";
    }
}