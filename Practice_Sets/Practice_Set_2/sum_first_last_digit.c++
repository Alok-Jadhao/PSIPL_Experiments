#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number N: ";
    cin >> n;
    int temp = n;

    int count = 0;
	while(n>0){
	
		count++;
		n/=10;
	}

    n= temp;
    //Last digit.
    int last_digit = n%10;

    //First digit.
    int first_digit = n/(pow(10,count-1));

    cout << "First digit " << first_digit << endl;
    cout << "Last digit " << last_digit << endl;

    cout << "Sum of First and Last integer = " << first_digit+last_digit << endl;

    return 0;
}