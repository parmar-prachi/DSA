#include <iostream>
using namespace std;
int main()
{
    // print 1 to 10 using do -while loop

    int i = 1, n;

    cout << "Enter the number of terms: ";
    cin >> n;

    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
}