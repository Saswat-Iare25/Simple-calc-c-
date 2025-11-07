#include <iostream>
#include <cctype>
#include <cmath>
using namespace std; 


class calc {
public:
    void cal() {
        char x;
        float x1, x2, r;

        cout << "Which Operation Do You Want:\n";
        cout << "Press A for add, S for subtract, M for multiply, D for divide\n";
        cout << "Press R for square root, P for square, and C for cube\n";
        cin >> x;

        x = toupper(x);

        if (x == 'A' || x == 'S' || x == 'M' || x == 'D' || x == 'R' || x == 'P' || x == 'C') {
            if (x == 'R' || x == 'P' || x == 'C') {
                cout << "Enter a number: ";
                cin >> x1;
            } else {
                cout << "Enter the two numbers: ";
                cin >> x1 >> x2;
            }

            switch (x) {
                case 'A':
                    r = x1 + x2;
                    cout << "Result is: " << r << endl;
                    break;
                case 'S':
                    r = x1 - x2;
                    cout << "Result is: " << r << endl;
                    break;
                case 'M':
                    r = x1 * x2;
                    cout << "Result is: " << r << endl;
                    break;
                case 'D':
                    if (x2 != 0) {
                        r = x1 / x2;
                        cout << "Result is: " << r << endl;
                    } else {
                        cout << "Division by zero is not possible" << endl;
                    }
                    break;
                case 'R':
                    if (x1 >= 0) {
                        r = sqrt(x1);
                        cout << "Square root of " << x1 << " is: " << r << endl;
                    } else {
                        cout << "Invalid input for square root. Enter a non-negative number." << endl;
                    }
                    break;
                case 'P':
                    r = x1 * x1;
                    cout << "Square of " << x1 << " is: " << r << endl;
                    break;
                case 'C':
                    r = x1 * x1 * x1;
                    cout << "Cube of " << x1 << " is: " << r << endl;
                    break;
                default:
                    cout << "Invalid operation" << endl;
            }
        } else {
            cout << "Invalid operation" << endl;
        }
    }
};

int main() {
    calc c;
    char choice;

    do {
        c.cal();
        cout << "\nDo you want to perform another operation? (Y/N): ";
        cin >> choice;
        choice = toupper(choice);
    } while (choice == 'Y');

    cout << "Thank you for using the calculator. Goodbye!" << endl;
    return 0;
}
