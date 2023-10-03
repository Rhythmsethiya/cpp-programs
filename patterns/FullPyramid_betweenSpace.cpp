#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int k;
    for(int i=0;i<n;i++)
    {
    k = 0;
        for(int j=0;j<(2*n-1);j++)
        {
            if(j<(n-1-i))
            {
                cout << " ";
            }
            else if(k<(2*i+1))
            {
                if(k%2==0)
                {
                    cout << "*";
                }
                else cout << " ";
                k++;
            }
            else cout << " ";

        }
        cout << endl;
    }
}