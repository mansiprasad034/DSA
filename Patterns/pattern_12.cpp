#include<iostream>
using namespace std;
int main()
{
    int row = 1;
    int n;
    char ch = 'A';
    cin>>n;
    while(row<=n)
    {
        int col = 1;
         
        while(col<=n)
        {           
            cout<<ch;
            ch = ch+1;
            col++;
        }
        cout<<endl;
        row++;
    }
}