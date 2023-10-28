#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the upper limit of the series N: ";
    cin>> n;

    int sum_of_squares = (n*(n+1)*(2*n+1))/6;
    cout << "The sum of squares till N^2 is: " << sum_of_squares << endl;

    return 0;
}