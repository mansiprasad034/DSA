#include<iostream>
using namespace std;

int lin_search(int num[], int size)
{
    int ans = 20;
    for(int i = 1; i<=size; i++)
    {
        if(ans == num[i])
        {
            cout<<"Element found";
        }
        }
    return 0;
}

int main()
{
    int num[20], size;
    cin>>size;
    for(int i=1; i<=size; i++)
    {
        cout<<"Enter the values in the array: ";
        cin>>num[i];
    }
    lin_search(num, size);
}