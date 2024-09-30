#include<iostream>
using namespace std;
int main()
{
    int row =1;
    int n;
    cin>>n;
    while(row<=n)
    {
        int col = 1;
        char ch = 'A'+n-row;
        while(col<=row)
        {
            
            cout<<ch;
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
}