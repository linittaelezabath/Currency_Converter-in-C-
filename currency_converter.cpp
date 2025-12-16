#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, result;
    
    const double USD_TO_INR = 90.0;
    const double EUR_TO_INR = 107.0;
    const double GBP_TO_INR = 122.0;

    cout << "===== Currency Converter =====\n";
    cout << "1. INR to USD\n";
    cout << "2. INR to EUR\n";
    cout << "3. INR to GBP\n";
    cout << "4. USD to INR\n";
    cout << "5. EUR to INR\n";
    cout << "6. GBP to INR\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    switch (choice) {
        case 1:
            result = amount / USD_TO_INR;
            cout << "Amount in USD: " << result;
            break;

        case 2:
            result = amount / EUR_TO_INR;
            cout << "Amount in EUR: " << result;
            break;

        case 3:
            result = amount / GBP_TO_INR;
            cout << "Amount in GBP: " << result;
            break;

        case 4:
            result = amount * USD_TO_INR;
            cout << "Amount in INR: " << result;
            break;

        case 5:
            result = amount * EUR_TO_INR;
            cout << "Amount in INR: " << result;
            break;

        case 6:
            result = amount * GBP_TO_INR;
            cout << "Amount in INR: " << result;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}