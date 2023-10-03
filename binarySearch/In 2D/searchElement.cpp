#include<iostream>
using namespace std;
int main()
{
    int flag = 1;
    int a[2][2]  = {
        {1,2},
        {3,4}
    };

    int n = 4;

    int s = 0; 
    int e = n-1;

    int target = 3;

    int mid = s+(e-s)/2;

    while(s<=e)
    {
        int row = mid/2;
        int col = mid % 2;

        int currElem = a[row][col];

        if(currElem == target)
        {
            cout << "Target is found";
            flag = 0;
            break;
        }
        else if(currElem>target)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }
    if(flag==1)
        cout << "target is not found";

}