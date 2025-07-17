#include <iostream>
using namespace std;
int main()
{

    // find the largest number with trenary oprator

    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    (a > b) ? ((a > c)
                   ? cout << "Largest number is " << a
                   : cout << "Largest number is " << c)
            : ((b > c)
                   ? cout << "Largest number is " << b
                   : cout << "Largest number is " << c);
}