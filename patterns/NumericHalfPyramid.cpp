#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int num;
    for(int i=0;i<5;i++)
    {
        num = 1;
        for(int j=0;j<i+1;j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}