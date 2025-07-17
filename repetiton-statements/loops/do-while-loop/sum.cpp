#include <iostream>
using namespace std;
int main()
{

    // sum of N numbers using do-while loop.

    int n, sum = 0, i = 1;

    cout << " Enter the number of elements: ";
    cin >> n;

    do
    {
        sum = sum + i;
        i++;
        
    } while (i <= n);
    cout << "Sum of " << n << "numbers is: " << sum;
}
