#include <iostream>
using namespace std;
int main()
{

    // factorial of a number using while loop
    
    int n, i = 1, fact = 1;

    cout << " Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    cout << " Factorial of " << n << " is " << fact;
}