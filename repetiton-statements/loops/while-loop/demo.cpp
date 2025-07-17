#include <iostream>
using namespace std;
int main()
{
    // print 1 to 10 using while loop

    int i = 1, n;

    cout << "Enter the number of terms: ";
    cin >> n;

    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
}