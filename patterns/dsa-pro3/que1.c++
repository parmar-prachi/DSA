#include<iostream>
using namespace std;
int main()
{
   int i , j;

    for ( i = 1; i <= 5; i++)
    {
        int num = 41;

        for ( j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}