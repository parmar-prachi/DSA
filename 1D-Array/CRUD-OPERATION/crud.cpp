
// CRUD OPration

#include <iostream>
using namespace std;

int main()
{
    int i, element, size, position, choice, count = 1;

    cout << "enter the size of array:- ";
    cin >> size;

    int arr[size];
    do
    {

        cout << " 1 element inserted in array" << endl;
        cout << " 2 element deleted from array" << endl;
        cout << " 3 element updated in array" << endl;
        cout << " 4 element view in array" << endl;
        cout << " 5 size of array" << endl;
        cout << " 0 exit" << endl;

        cout << "enter your Choice:- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter the element :- ";
            cin >> element;

            cout << "enter the Position :-";
            cin >> position;

            for (i = size - 1; i >= position; i--)
            {
                arr[i] = arr[i + 1];
            }
            size++;
            arr[position] = element;
            for (i = 0; i < size; i++)
            {
                cout << arr[i] << " " << endl;
            }
            cout << "Element Inserted Successfully" << endl;
            break;

        case 2:

            cout << "enter the element:- ";
            cin >> element;

            cout << "enter the Position";
            cin >> position;

            break;

        case 3:
            cout << "enter the element:- ";
            cin >> element;
            cout << "enter the Position";
            cin >> position;

            break;

        case 4:
            cout << "your array is:- ";
            for (i = 0; i < count; i++)
            {
                cout << arr[i] << " ";
            }
            arr[position] = element;
            break;
        }

    } while (choice != 0);
}
