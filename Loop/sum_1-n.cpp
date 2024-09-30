#include<iostream>
using namespace std;

int main()
{
    int n, sum, i;
    sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(i =0;i<n; i++)
    {
        sum=sum+i;
    }
    cout<<"The sum is: "<<sum;
}