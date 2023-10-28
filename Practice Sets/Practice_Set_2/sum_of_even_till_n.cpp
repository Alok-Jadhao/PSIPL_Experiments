#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum=0;

    while(n>0)
    {
        if(n%2==0)
        {
            sum=sum+n;
            n=n-2;
        }

        else
            n=n-1;
            sum = sum+n;
            n=n-2;
    }
    cout << sum;
}

