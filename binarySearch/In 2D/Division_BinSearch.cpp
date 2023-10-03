#include<iostream>
using namespace std;
int main()
{
    int a1 = -29;
    int b1 = 7;
    // //making search space 
    // int s = 0;
    // int e = 29;

    // int mid = (s+e)/2;
    // //making checker and compare with checker 
    // //quotient will be our 'mid' number only
    // int checker = 29;
    // int ans = 0;
    // while(s<=e)
    // {
    //     if(mid*7<=checker)
    //     {
    //         ans = mid;
    //         s = mid+1;
    //     }
    //     else if(mid*7>checker)
    //     {
    //         e = mid-1;
    //     }
    //     mid = s+(e-s)/2;
    // }

    // cout<< ans;


    // agar a and b dono mai se ek bhi ya dono -ve hai toh update code:
    //make +ve using abs() function 
    int a = abs(a1);
    int b = abs(b1);
    int s = 0;
    int e = 29;

    int mid = (s+e)/2;
    //making checker and compare with checker 
    //quotient will be our 'mid' number only
    int checker = 29;
    int ans = 0;
    while(s<=e)
    {
        if(mid*7<=checker)
        {
            ans = mid;
            s = mid+1;
        }
        else if(mid*7>checker)
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }

    if(a1<0 || b1<0)
    cout << -(ans);
    else cout << ans;
}