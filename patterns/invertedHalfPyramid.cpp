#include<iostream>
using namespace std;
int main()
{
    // int a = 5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(5-i);j++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
    }
}