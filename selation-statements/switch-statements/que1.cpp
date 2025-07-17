#include <iostream>
using namespace std;
int main()
{
    int choice;

    cout << "Welcome To Our Cafe:" << endl;
    cout << "Select Your Food & Drink:" << endl;

    cout << "1. Coffee" << endl;
    cout << "2. Pizza" << endl;
    cout << "3. Sandwich" << endl;
    cout << "4. Burger" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You have selected Coffee." << endl;
        cout << "Which type of coffee do you want?" << endl;
        cout << "1. Black Coffee" << endl;
        cout << "2. White Coffee" << endl;
        cout << "3. Cappuccino" << endl;
        cout << "4. Latte" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "You have selected Black Coffee." << endl;
            break;
        case 2:
            cout << "You have selected White Coffee." << endl;
            break;
        case 3:
            cout << "You have selected Cappuccino." << endl;
            break;
        case 4:
            cout << "You have selected Latte." << endl;
            break;
        }
        break;
    case 2:
        cout << "You have selected Pizza." << endl;
        cout << "Which type of pizza do you want ?" << endl;
        cout << "1. Veg Pizza" << endl;
        cout << "2. Paneer Pizza" << endl;
        cout << "3. Cheese Pizza" << endl;
        cout << "4. Corn Pizza" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "You have selected Veg Pizza." << endl;
            break;
        case 2:
            cout << "You have selected Paneer Pizza." << endl;
            break;
        case 3:
            cout << "You have selected Cheese Pizza." << endl;
            break;
        case 4:
            cout << "You have selected Corn Pizza." << endl;
            break;
        }
        break;
    case 3:
        cout << "You have selected Sandwich." << endl;
        cout << "Which type of sandwich do you want ?" << endl;
        cout << "1. Veg Sandwich" << endl;
        cout << "2. Grill Sandwich" << endl;
        cout << "3. Cheese Sandwich" << endl;
        cout << "4. Butter Sandwich" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "You have selected Veg Sandwich." << endl;
            break;
        case 2:
            cout << "You have selected Grill Sandwich." << endl;
            break;
        case 3:
            cout << "You have selected Cheese Sandwich." << endl;
            break;
        case 4:
            cout << "You have selected Butter Sandwich." << endl;
            break;
        }
        break;
    case 4:
        cout << "You have selected Burger." << endl;
        cout << "Which type of burger do you want ?" << endl;
        cout << "1. Veg Burger" << endl;
        cout << "2. Paneer Burger" << endl;
        cout << "3. Cheese Burger" << endl;
        cout << "4. Butter Burger" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "You have selected Veg Burger." << endl;
            break;
        case 2:
            cout << "You have selected Paneer Burger." << endl;
            break;
        case 3:
            cout << "You have selected Cheese Burger." << endl;
            break;
        case 4:
            cout << "You have selected Butter Burger." << endl;
            break;
        }
        break;
    case 5:
        cout << "Thank you for visiting our cafe." << endl;
        break;
    default:
        cout << "Invalid choice. Please select a valid option." << endl;
    }
}