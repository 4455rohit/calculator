#include <iostream>
using namespace std;

 
    float addition(float first, float second)
    {
        return( first + second);
    }

    float subtract(float first, float second) {
        return (first - second);
    }

    float multiplication(float first, float second) {
        
        return (first * second);
    }

    float division(float first, float second) {
        if (second != 0) {
            return (first / second);
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }


int main() {
    float num_first, num_second;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num_first >> num_second;

    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    float result;
    switch (choice) {
        case 1:
            result = addition(num_first, num_second);
            cout << "Result of addition: " << result << endl;
            break;
        case 2:
            result = subtract(num_first, num_second);
            cout << "Result of subtraction: " << result << endl;
            break;
        case 3:
            result = multiplication(num_first, num_second);
            cout << "Result of multiplication: " << result << endl;
            break;
        case 4:
            result = division(num_first, num_second);
            cout << "Result of division: " << result << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}

