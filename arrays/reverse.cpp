#include<iostream>
using namespace std;


void reverse(int num[], int size)
{
    int reverse;
    for(int i=size - 1; i>=0; i--)
    {
        cout<<num[i]<<endl;
    }
}

int main()
{
    int num[20], size;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the values in the array: ";
        cin>>num[i];

    }
    reverse(num, size);

}