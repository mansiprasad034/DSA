#include<iostream>
using namespace std;

int sum(int num[], int size)
{
    int sum = 0;
    for(int i=0; i<=size; i++)
    {
        sum=sum+num[i];
    }
    return sum;
}

int main()
{
    int num[100], size;
    cin>>size;
    for(int i =0; i<=size; i++)
    {
        cout<<"Enter the vaues in the array: "<<endl;
        cin>>num[i];
    }

    cout<<"The sum of the array is: "<<sum(num, size);
    

}