 #include<iostream>
using namespace std;

int main()
{
    cout << "Enter N for the multiplication table: ";
    int n;
    cin >> n;

    for(int i=1;i<=10;i++)
    {
        cout << n << '*' << i << '=' << n*i << endl;
    }

    return 0;
}