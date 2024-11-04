#include<iostream>
using namespace std;

int sum_array(int arr[10], int size)
{
    int sum = 0;
    for(int i=0; i<size;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[10], size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the elements in the array"<<endl;
        cin>>arr[i];
    }
    cout<<"\nThe sum of the elemnts in the array is: "<<sum_array(arr, size)<<endl;
}