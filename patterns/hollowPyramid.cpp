#include<iostream>
using namespace std;
int main()
{
    int n  = 4;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            cout << " ";
        }
        for(int j=0;j<(2*i+1);j++)
        {
            if(j==0 || j==2*i)
                cout << "*";
            else cout << " ";
        }
        cout << endl;


    }
}