#include<iostream>
using namespace std;
int main()
{
    int row = 1;
    int n;
    cin>>n;
    while(row<=n)
    {
        int col = 1;
        int value = row;
        while(col<=row)
        {
            //cout<<value<<" ";
            //value++;
            cout<<row+col-1;            
            col++;
        }
        cout<<endl;
        row++;
    }
}