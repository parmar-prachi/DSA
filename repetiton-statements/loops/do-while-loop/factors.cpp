#include <iostream>
using namespace std;
int main()
{
    // factors of numbers using do-while loop

    int n, i = 1;

    cout << " Enter a number: ";
    cin >> n;
    
    do
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);
}