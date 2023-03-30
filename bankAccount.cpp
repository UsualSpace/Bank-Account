/*
    filename: bankAccount.cpp
    summary: Bank account prompts
    author: Abdurrahman Alyajouri
    date: 1/31/2023
*/

#include <iostream>
using namespace std;

int main()
{
    int action,
        balance,
        deposit,
        withdrawl;
        
    cout << "Enter your current balance: ";    
        
    cin >> balance;
        
    cout << "What would you like to do?\n"
         << "1 - Deposit Money\n"
         << "2 - Withdraw Money\n"
         << "3 - See Balance\n"
         << "4 - Quit\n";
         
    cin >> action;

    switch(action) {
	    case 1:
	        cout << "Enter deposit amount: ";
	        cin >> deposit;
		    balance += deposit;
		    cout << "$" << deposit << " deposited. New balance is $" << balance << "." << endl;
		    break;
	    case 2:
	        cout << "Enter withdrawl amount: ";
	        cin >> withdrawl;
		    if(withdrawl <= balance && withdrawl > 0) {
		        balance -= withdrawl;
		        cout << "$" << withdrawl << " withdrawled. " << "New balance is $" << balance << "." << endl;
		    } else {
		        cout << "Withdrawl is too large";
		    }
		    break;
	    case 3:
		    cout << "Balance is: $" << balance << endl;
		    break;
	    case 4:
		    cout << "Goodbye.\n";
		    break;
	    default:
		    cout << "Invalid entry.\n";
    }

    return 0;
}

