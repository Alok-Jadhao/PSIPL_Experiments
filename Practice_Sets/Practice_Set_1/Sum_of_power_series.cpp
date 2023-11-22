#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n,x;
    cout << "Enter the number X: ";
    cin>> x;

    cout << "Enter the max power N: ";
    cin>> n;

    int sum = 0;

    for(int i =0;i<=n;i++)
    {
        sum = sum+ pow(x,i);
    }

    
    cout << "The sum of series is: " << sum << endl;

    return 0;
}



