/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    int accNo;
    string name;
    double balance;

    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void display() {
        cout << "\n-------------------";
        cout << "\nAccount Number : " << accNo;
        cout << "\nName           : " << name;
        cout << "\nBalance        : " << balance;
        cout << "\n-------------------\n";
    }
};

vector<Account> accounts;

void createAccount() {
    Account a;
    a.createAccount();
    accounts.push_back(a);
    cout << "\nAccount Created Successfully!\n";
}

void depositMoney() {
    int acc;
    double amount;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == acc) {
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            accounts[i].balance += amount;

            cout << "Money Deposited Successfully!\n";
            return;
        }
    }

    cout << "Account Not Found!\n";
}

void withdrawMoney() {
    int acc;
    double amount;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == acc) {
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            if (amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                cout << "Withdrawal Successful!\n";
            } else {
                cout << "Insufficient Balance!\n";
            }
            return;
        }
    }

    cout << "Account Not Found!\n";
}

void checkBalance() {
    int acc;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == acc) {
            cout << "Current Balance: " << accounts[i].balance << endl;
            return;
        }
    }

    cout << "Account Not Found!\n";
}

void searchAccount() {
    int acc;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == acc) {
            accounts[i].display();
            return;
        }
    }

    cout << "Account Not Found!\n";
}

void displayAllAccounts() {
    if (accounts.empty()) {
        cout << "No Accounts Available!\n";
        return;
    }

    for (int i = 0; i < accounts.size(); i++) {
        accounts[i].display();
    }
}

void deleteAccount() {
    int acc;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == acc) {
            accounts.erase(accounts.begin() + i);
            cout << "Account Deleted Successfully!\n";
            return;
        }
    }

    cout << "Account Not Found!\n";
}

void updateAccount() {
    int acc;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == acc) {

            cout << "Enter New Name: ";
            cin >> accounts[i].name;

            cout << "Account Updated Successfully!\n";
            return;
        }
    }

    cout << "Account Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n====== SMART BANK MANAGEMENT SYSTEM ======\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Search Account\n";
        cout << "6. Display All Accounts\n";
        cout << "7. Delete Account\n";
        cout << "8. Update Account Name\n";
        cout << "9. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                createAccount();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                checkBalance();
                break;

            case 5:
                searchAccount();
                break;

            case 6:
                displayAllAccounts();
                break;

            case 7:
                deleteAccount();
                break;

            case 8:
                updateAccount();
                break;

            case 9:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 9);

    return 0;
}