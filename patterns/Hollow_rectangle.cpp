#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(i==0 ||  i==4)
            {
                cout << "*";
            }
            else if(j==0 || j==5)
            {
                cout << "*" ;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}