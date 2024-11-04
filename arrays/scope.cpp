#include<iostream>
using namespace std;

void update(int arr1[], int n)
{
    cout<<"Into the update function"<<endl;
    arr1[0] = 120;
     for(int i=0; i<3; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\nGoing to the main function"<<endl;

}

int main()
{
    
    int arr[3] = {1,2,3};
    update(arr, 3);

    for(int i=0; i<3; i++)
    {
        cout<<arr[i]<<" ";
    }
}