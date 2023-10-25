#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the upper limit of the series N: ";
    cin>> n;

    int sum = (n*(n+1))/2;
    cout << "The sum of series is: " << sum << endl;

    return 0;
}