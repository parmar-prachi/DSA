#include <iostream>
using namespace std;
int main()
{

    // sum of N numbers using while loop.

    int n, sum = 0, i = 1;

    cout << " Enter the number of elements: ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum of " << n << "numbers is: " << sum;
}