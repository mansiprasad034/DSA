#include<iostream>
using namespace std;

void reverse(int arr[10], int size)
{
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;       
    }
}

void printArray(int arr[10], int size)
{
    for(int i=0;i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[10], size, num;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the elements in the array"<<endl;
        cin>>arr[i];
    }
    reverse(arr,size);
    printArray(arr, size);

}

