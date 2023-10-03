#include<iostream>
#include<cmath>
using namespace std;
int decimaToBinary(int n)
{
    int rem;
    int div;
    int n1 = n;
    int ans = 0;
    while(n1>0)
    {

        rem = n1%2;
        ans = rem+ans*10;
        n1 = n1/2;
    }

    return ans;

}

int BinaryToDecimal(int n)
{
    int a = n;
    int ans = 0;
    int i = 0;
    while(a)
    {
        ans+=((a%10)*pow(2,i));
        i++;
        a/=10;
    }

    return ans;
}
int main()
{
    cout << "Enter the value of a"<< endl;
    int a;
    cin >>a ;

    cout << "its decimal number:"<< BinaryToDecimal(a);

}   