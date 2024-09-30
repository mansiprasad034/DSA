//Prime number

#include<iostream>
using namespace std;

int main()
{
    int i=2;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<n)
    {
        //num gets divided
        if(n % i == 0)
        {
            cout<<"The number is not Prime for"<<i<<endl;
        }
        else{
            cout<<"The number is Prime for"<<i<<endl;
        }
        i= i+1;
    }
}
