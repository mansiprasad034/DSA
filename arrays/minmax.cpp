#include<iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
           
        }
    }
    return max;
}
int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i=0;i<size; i++)
    {
        if(arr[i]<min)
        {
           min=arr[i];
        }        
    }
    return min;
}

int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the elements in the array: ";
        cin>>arr[i];
    }
    cout<<"The maximum value is: "<< getMax(arr, size)<<endl;
    cout<<"The minimum value is: "<< getMin(arr, size)<<endl;

}