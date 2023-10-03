#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a>>b;

    // int t = a;
    // a = b;
    // b = t;

    a = a^b;
    b = a^b;

    
    cout << "after swap : "<<a<< " " << b<< endl;


    
}