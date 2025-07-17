#include <iostream>
using namespace std;
int main()
{

    // sum of N numbers using for loop.

    int n, sum = 0;

    cout << " Enter the number of elements: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of " << n << "numbers is: " << sum;
}
