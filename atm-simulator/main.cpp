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
};

vector<Account> accounts;

void createAccount() {
    Account a;

    cout << "\nEnter Account Number: ";
    cin >> a.accNo;

    cout << "Enter Name: ";
    cin >> a.name;

    cout << "Enter Initial Balance: ";
    cin >> a.balance;

    accounts.push_back(a);

    cout << "Account Created Successfully!\n";
}

int login() {
    int accNo;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    for(int i = 0; i < accounts.size(); i++) {
        if(accounts[i].accNo == accNo) {
            return i;
        }
    }

    return -1;
}

void atmMenu(int index) {
    int choice;
    double amount;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Logout\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Balance: ₹" << accounts[index].balance << endl;
            break;

        case 2:
            cout << "Enter Amount: ";
            cin >> amount;

            accounts[index].balance += amount;

            cout << "Deposit Successful!\n";
            break;

        case 3:
            cout << "Enter Amount: ";
            cin >> amount;

            if(amount <= accounts[index].balance) {
                accounts[index].balance -= amount;
                cout << "Withdrawal Successful!\n";
            }
            else {
                cout << "Insufficient Balance!\n";
            }
            break;

        case 4:
            cout << "Logged Out Successfully!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 4);
}

int main() {

    int choice;

    do {
        cout << "\n====== ATM SIMULATOR ======\n";
        cout << "1. Create Account\n";
        cout << "2. Login to ATM\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            createAccount();
            break;

        case 2: {
            int index = login();

            if(index != -1) {
                cout << "Login Successful!\n";
                atmMenu(index);
            }
            else {
                cout << "Account Not Found!\n";
            }
            break;
        }

        case 3:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}