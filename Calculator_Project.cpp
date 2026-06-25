#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    double num1, num2;
    char again;

    cout << "========================================\n";
    cout << "      Welcome to My Calculator\n";
    cout << "========================================\n";

    do
    {
        cout << "\nChoose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square\n";
        cout << "6. Square Root\n";
        cout << "7. Power\n";
        cout << "8. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "\nEnter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "\nEnter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                cout << "\nEnter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                if (num2 == 0)
                    cout << "Sorry! Division by zero is not allowed.\n";
                else
                    cout << "Result = " << fixed << setprecision(2) << num1 / num2 << endl;
                break;

            case 5:
                cout << "\nEnter a number: ";
                cin >> num1;
                cout << "Square = " << num1 * num1 << endl;
                break;

            case 6:
                cout << "\nEnter a number: ";
                cin >> num1;

                if (num1 < 0)
                    cout << "Square root of a negative number is not possible.\n";
                else
                    cout << "Square Root = " << sqrt(num1) << endl;
                break;

            case 7:
                cout << "\nEnter base number: ";
                cin >> num1;
                cout << "Enter power: ";
                cin >> num2;
                cout << "Result = " << pow(num1, num2) << endl;
                break;

            case 8:
                cout << "\nThank you for using the calculator!\n";
                return 0;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

        cout << "\nWould you like to perform another calculation? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\nThank you for using the calculator!\n";
    return 0;
}
