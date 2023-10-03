// It is important for interview
#include<iostream>
using namespace std;
int main()
{
    int n  =6;
    int k;
    for(int i=0;i<6;i++)
    {
        k = 0;
        for(int j=0;j<(2*n-1);j++)
        {
            if(j<(n-i-1))
            {
                cout << " ";
            }
            else if(k<2*i+1)
            {
                cout << "*";
                k++;
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }

}