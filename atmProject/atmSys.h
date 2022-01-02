#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

class atmSys
{
    
public:
    void cardInsert()
{
    int cardInp;
    int badCardRead;
    srand (time(NULL));
    
    cout << "Press 1 to Insert Your Card!: ";
    cin >> cardInp;

    badCardRead = rand() % 10 + 1;
    while (cardInp != 1)
    {
        cout << "ERROR: Invalid Request!" << endl;
        cout << "Press 1 to Insert Your Card!: ";
        cin >> cardInp;
    }
    if (badCardRead == 2)
    {
        cout << "ERROR: BAD CARD READ, Please Try Again!" << endl;
        cout << "Press 1 to Insert Your Card!: ";
        cin >> cardInp;
    }
}



void displayMenu()
{
    int userInput;
    int withdraw;
    int deposit;

    int bal = 1000 + (rand() % 9000);

    cout << "Main Menu " << endl;
    cout << "-------------------------" << endl;
    cout << "YOUR CURRENT BALANCE: $" << bal << endl;
    cout << "-------------------------" << endl;
    cout << "1. WITHDRAW MONEY" << endl;
    cout << "2. DEPOSIT MONEY" << endl;
    cout << "9. EXIT" << endl;

    cin>> userInput;
    
    while (userInput != 9)
    {
        switch (userInput)
        {
        case 1:
            cout << "Your Balance : $" << bal << endl;
            cout << "How much do you want to withdraw?: ";
            cin >> withdraw;
            while (withdraw > 500)
            {
                cout << "Any withdraw higher than $500 you must visit a physical bank!" << endl;
                cout << "How much do you want to withdraw?: ";
                cin >> withdraw;
                if (withdraw > bal)
                {
                    cout << "ERROR: NOT ENOUGHT FUNDS" << endl;
                }
            }
            
            bal = bal - withdraw;
            cout << "New Balance: " << bal << endl << endl;
            break;
            cout << endl;
        case 2:
            cout << "Your Balance: $" << bal << endl;
            cout << "How much do you want to deposit?: ";
            cin >> deposit;
            while (deposit > 500)
            {
                cout << "Any deposit higher than $500 you must visit a physical bank!" << endl;
                cout << "How much do you want to deposit?: ";
                cin >> deposit;
                if (deposit <= 0)
                {
                    cout << "ERROR: Invalid input" << endl;
                }
            }
            bal = bal + deposit;
            cout << "New Balance: " << bal << endl << endl;
            break;
        }
        cout << "Main Menu " << endl;
        cout << "-------------------------" << endl;
        cout << "YOUR CURRENT BALANCE: $" << bal << endl;
        cout << "-------------------------" << endl;
        cout << "1. WITHDRAW MONEY" << endl;
        cout << "2. DEPOSIT MONEY" << endl;
        cout << "9. EXIT" << endl;
        cin >> userInput;
    }
    cout << "Thanks You Goodbye!" << endl;
}
void cardPin()
{
    int pinInp;
    int pin = 1111;
    int errC = 3;
    bool login = true;
    cout << "Enter PIN: ";
    cin >> pinInp;
    while (pinInp != pin && errC != 0)
    {
        cout << "WRONG PIN PLEASE TRY AGAIN. " << errC << " ATTEMPTS REMAINING" << endl;
        errC = errC - 1;
        cout << "Enter PIN: ";
        cin >> pinInp;
        login = false;
    }
    if (login == true)
    {
        displayMenu();
    }
}

};
