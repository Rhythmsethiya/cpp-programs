#include<iostream>
using namespace std;
int main()
{
    int a = 10;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j<=i)
            {
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}