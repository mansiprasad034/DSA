#include<iostream>
using namespace std;
int main()
{
    int row =1;
    int n;
    cin>>n;
    char val = 'A';

    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<val;
            val++;
            col++;
        }

        cout<<endl;
        row++;
    }
}