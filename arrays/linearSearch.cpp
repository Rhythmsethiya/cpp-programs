#include<iostream>
using namespace std;
int main()
{
    int target = 19;
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    for(int i=0;i<10;i++)
    {
        if(target == arr[i])
        {
            cout<<"Target is found\n";
            return 0;
        }
    }

    cout << "Target is not found\n";
}