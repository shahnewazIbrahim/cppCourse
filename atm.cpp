#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********Menu**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main()
{
    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is: " << balance << " $" << endl;
            break;
        case 2:
            cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            cout << "After deposit your balance is: " << balance << " $" << endl;
            break;

        case 3:
            cout << "Withdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
                cout << "After deposit your balance is: " << balance << " $" << endl;
            }
            else
                cout << "Not enough money" << endl;

            break;
        }

    } while (option != 4);
    system("pause>0");
    return 0;
}