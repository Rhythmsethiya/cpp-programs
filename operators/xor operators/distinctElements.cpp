#include<iostream>
using namespace std;
int main()
{
    int a[7] = {2,2,1,1,3,4,3};
    int ans = a[0];
    for(int i=1;i<7;i++)
    {
        ans = ans^a[i];

    }
    cout << "the distinct element:\n"<<ans<<endl;
}