#include <iostream>
using namespace std;

int main()
{

    // Create a 1D Array of all leap years from a given range //

    int StartYear, EndYear, i, Arr[20], j = 0;

    cout << " Enter the Start Year :";
    cin >> StartYear;

    cout << " Enter the End Year :";
    cin >> EndYear;

    for (i = StartYear; i <= EndYear; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            Arr[j] = i;
            j++;
        }
    }

    cout << "Leap Years between " << StartYear << " and " << EndYear << " are:" << endl;

    for (i = 0; i < j; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
