#include<iostream>
using namespace std;

//1 --> Even
//0-->Odd
bool isEven(int num)
{
    if(num&1)
    { //odd
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cin >> num;
    if(isEven(num))
    {
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }


}