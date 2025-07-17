#include <iostream>
using namespace std;
int main()
{

    // print 1 to 10 using for loop

    int n, i;
    
    cout << "Enter the number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}