#include<iostream>
using namespace std;

void swap_alternate(int arr[10], int size)
{
    int start = 0;
    int end = 1;

    //using while loop

    while(start<size-1)
    {
        swap(arr[start], arr[end]);
        start = start+2;
        end=end+2;
    }

    //using foor loop

    for(int i=0; i<size; i+2)
    {
        if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
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

    swap_alternate(arr, size);
    printArray(arr, size);


}