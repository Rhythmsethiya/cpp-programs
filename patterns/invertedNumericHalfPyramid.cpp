#include<iostream>
using namespace std;
int main(){
    //first method:
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=4;j>=i;j--)
    //     {
    //         cout << "*"<<" ";
    //     }
    //     cout << endl;
    // }

    //second method
    int n;
    for(int i=0;i<=4;i++)
    {
        n = 1;
        for(int j=0;j<=(4-i);j++)
        {
            cout << n;
            n++;
        }
        cout << endl;
    }
}