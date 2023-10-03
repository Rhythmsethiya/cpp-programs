#include<iostream>
using namespace std;
int main()
{
    int a;
    a  = 100;
    for(int i=2;i<=a;i++)
    {
        int j = 2;
        for(;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        // cout << "after break;\n";
        if(j==(i))
        {
            cout << j << endl;
        }
    }
}