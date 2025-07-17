#include <iostream>
using namespace std;
int main()
{

    // factorial of a number using do-while loop

    int n, i = 1, fact = 1;

    cout << " Enter a number: ";
    cin >> n;
    do
    {
        fact = fact * i;
        i++;
        
    } while (i <= n);
    cout << "Factorial of " << n << " is " << fact;
}
