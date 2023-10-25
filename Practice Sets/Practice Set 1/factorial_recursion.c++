#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n>0){
        return factorial(n-1)*n;
    }
    if(n<=0)
        return 1;
    
}

int main()
{
    int n;
    cout << "Enter the number N: ";
    cin>> n;

    cout << "The factorial of N is: " << factorial(n) << endl;

    return 0;
}