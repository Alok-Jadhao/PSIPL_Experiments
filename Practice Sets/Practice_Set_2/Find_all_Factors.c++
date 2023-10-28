#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number N: ";
    cin >> n;

    int factors[100];
    int count = 0; //To keep the count of the factors.

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factors[count]=i; //Store the factor in the array using the counter.
            count++; //Increase the counter.
        }
    }

    for(int j=0;j<count;j++)
    {
        cout << factors[j] << " ";
    }


}