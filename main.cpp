#include <iostream>
#include <cstdlib>

using namespace std;

// Function prototipes //
int addTwoNumbers();
int subTwoNumbers();
int divTwoNumbers();
int mulTwoNumbers();

int main() {
    int choice;
    
    while (true) {
        cout << "===============================================" << endl;
        cout << "==============| BASIC C++ CALCULATOR |=========" << endl;
        cout << "======================|BY|=====================" << endl;
        cout << "=================|JAPHETH SHIUNDU|=============" << endl;
        cout << "==     PLEASE SELECT AN OPERATION BELOW:     ==" << endl;
        cout << "===============================================" << endl;
        cout << "1. ADD TWO NUMBERS\t2. SUBTRACT TWO NUMBERS" << endl;
        cout << "3. DIVIDE TWO NUMBERS\t4. MULTIPLY TWO NUMBERS" << endl;
        cout << "5. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addTwoNumbers();
                break;
            case 2:
                subTwoNumbers();
                break;
            case 3:
                divTwoNumbers();
                break;
            case 4:
                mulTwoNumbers();
                break;
            case 5:
                cout << "Exiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    
    return 0;
}

int addTwoNumbers() {
    int a, b;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    int sum = a + b;
    cout << "The sum of the two numbers is: " << sum << endl;
    return sum;
}



int subTwoNumbers() {
    int a, b;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    int difference = a - b;
    cout << "The difference of the two numbers is: " << difference << endl;
    return difference;
}




int divTwoNumbers() {
    int a, b;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    if (b == 0) {
        cout << "Error! Division by zero isn't allowed." << endl;
        return 0;
    }
    int quotient = a / b;
    cout << "The quotient of the two numbers is: " << quotient << endl;
    return quotient;
}




int mulTwoNumbers() {
    int a, b;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    int product = a * b;
    cout << "The product of the two numbers is: " << product << endl;
    return product;
}


