#include <iostream>
using namespace std;


int main() // main() => Name Function // int => Return Type of the Function
{

    double balance = 1000.0;
    int choice;
    double amount;

    cout << "Welcome to the Bank System\n";
    cout << "1- Withdraw\n2- Deposit\n3- Check Balance\n";
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice) {
        case 1: 
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << endl;
            } else {
                cout << "Insufficient funds. Your balance: " << balance << endl;
            }
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
            break;

        case 3:
            cout << "Your current balance is: " << balance << endl;
            break;

        default:
            cout << "Invalid option.\n";
    }

    
    string status = (balance > 0) ? "Your balance is positive." : 
    (balance == 0 ? "Your balance is zero." : "Your balance is negative!");
    cout << status << endl;

    return 0;
}




	
	