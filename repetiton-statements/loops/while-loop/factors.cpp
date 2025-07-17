#include <iostream>
using namespace std;
int main()
{
    // factors of numbers using while loop
    
    int n, i = 1;

    cout << " Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
}