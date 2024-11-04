#include<iostream>
using namespace std;

void print_array(int arr[], int size)
{
    
    
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<"\n";
    }  

}

int main()
{
    int arr[10] = {1,2,4,3,5,6,7,8,9,0};
    int size = 10;
    print_array(arr, size);
    //Length of an array
    int arr_size = sizeof(arr)/sizeof(int);
    cout<<"Szie of the array is : "<<arr_size;
}

