#include<iostream>
using namespace std;

int setbits(int n)
{
    int count = 0;
    while(n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int n, m;
    cin>>n>>m;
    cout<<"The numbero f set bits are: "<< setbits(n) + setbits(m);
}