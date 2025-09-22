#include <iostream>
using namespace std;

class Account {
public:
    string account_name;
    int balance;
    Account(string account_name, int balance = 0) {
        this->account_name = account_name;
        this->balance = balance;
        cout << "Account created for : " << account_name;
        cout << " with initial balance : " << balance << endl;
    }

    int deposit(int amount) {
        cout << "depositing " << amount << " rs" << endl;
        balance += amount;
        return balance;
    }

    int withdraw(int amount) {
        cout << "withdrawing " << amount << " rs" << endl;
        balance -= amount;
        return balance;
    }

    ~Account() {
        cout << "Account deleted successfully" << endl;
    }
};

int main() {
    int choice = 0;
    Account* c1 = nullptr; // ✅ No constructor call at start

    while (choice != -1) {
        cout << "Enter which operation you want to perform\n";
        cout << "-1 to end the program\n";
        cout << "1 for opening a new account\n";
        cout << "2 for depositing money\n";
        cout << "3 for withdrawing money\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                string acc_name;
                cout << "Enter account name : ";
                cin >> acc_name;
                cout << "Enter initial balance : ";
                int bal;
                cin >> bal;
                delete c1; // ✅ delete old account if it exists
                c1 = new Account(acc_name, bal);
                break;
            }

            case 2: {
                if (c1 == nullptr) {
                    cout << "No account exists. Please open an account first.\n";
                    break;
                }
                int depo;
                cout << "Enter how much amount you want to deposit : ";
                cin >> depo;
                cout << "New balance is : " << c1->deposit(depo) << endl;
                break;
            }

            case 3: {
                if (c1 == nullptr) {
                    cout << "No account exists. Please open an account first.\n";
                    break;
                }
                int withdraw;
                cout << "Enter how much amount you want to withdraw : ";
                cin >> withdraw;
                cout << "New balance is : " << c1->withdraw(withdraw) << endl;
                break;
            }
        }
    }

    delete c1; // ✅ Destructor called once at end
    return 0;
}
