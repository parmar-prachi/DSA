#include <iostream>
using namespace std;

int main()
{
    // nested if-else statement

    int a, b, c, d;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    cout << "Enter the value of d: ";
    cin >> d;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "a is the largest number";
            }
            else
            {
                cout << "d is the largest number";
            }
        }
        else
        {
            if (c > d)
            {
                cout << "c is the largest number";
            }
            else
            {
                cout << "d is the largest number";
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                cout << "b is the largest number";
            }
            else
            {
                cout << "d is the largest number";
            }
        }
        else
        {
            if (c > d)
            {
                cout << "c is the largest number";
            }
            else
            {
                cout << "d is the largest number";
            }
        }
    }

    return 0;
}
