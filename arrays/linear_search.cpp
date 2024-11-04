#include<iostream>
using namespace std;

bool search(int arr[], int size,int num)
{
    for (int i=0; i<size; i++)
    {if(arr[i]==num)
    {
        num = arr[i];
        return true;
    }
    }
    return false;
    
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
    cout<<"Enter the value to be found:";
    cin>>num; 
    if(search(arr, size, num)==true)
    {
        cout<<"Value found!"<<endl;
    }
    else{
        cout<<"Value not found"<<endl;
    }
}