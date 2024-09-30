#include<iostream>
using namespace std;

int fib(int n)
{
    int a = 0;
     int b = 1;
     cout<<a<<endl;
     cout<<b<<endl;
     int nextnum;
     for(int i= 1; i<=n; i++)
     {
        nextnum = a+b;
        cout<<nextnum<<endl;

        a = b;
        b = nextnum;
     }
     return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<"The fib series is: "<<fib(n);
}