#include <iostream>
using namespace std;

int main()
{
    //  Given two 1D arrays, merge them into a third array and sort the result.// 
    
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter " << n1 << " elements: ";
    for (int i = 0; i < n1; i++){

        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter " << n2 << " elements: ";
    for (int i = 0; i < n2; i++){

        cin >> arr2[i];
    }

    int merged[n1 + n2];

    for (int i = 0; i < n1; i++)
    {
        
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++){
        
        merged[n1 + i] = arr2[i];
    }

    int total = n1 + n2;

    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            if (merged[j] > merged[j + 1])
            {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    cout << "Merged and sorted array: ";
    for (int i = 0; i < total; i++)
    {
        cout << merged[i] << " ";
    }

    cout << endl;
    return 0;
}
