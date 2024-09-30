#include<iostream>
using namespace std;
int main()
{
    int row =1;
    int n;
    cin>>n;

    while(row<=n)
    {
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;

         
         }
         int col = 1;
            while(col<=row)
            {
                cout<<"*";
                col++;
            }
        cout<<endl;
        row++;
    }
}