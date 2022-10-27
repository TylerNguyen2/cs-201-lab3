// Lab03_Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<math.h>
#include<iomanip>
#include<fstream>
#include <cctype>
#include "checkingmodule.h"
using namespace std;



int main()
{
    float amountValue = 0.00;
    float depositAmount;
    char choice = ' ';

    float depositamt,withdrawamt,creditrating,months, intrate,  pamt, lamount; 
    while (choice != 'Q' )
    {
        choice = toupper(MainMenu());
        cout << choice << " made \n";

        switch (choice)
        {
        case 'D': {
            depositamt = GetValue("How much do you want to deposit? ");

            cout << endl << "Summary of Account";

            cout << endl << "---------------------";

            cout << endl << "Total Amount = " << depositamt << endl;
            break;
        }

        case 'W': {
            withdrawamt = GetValue("How much you want to withdraw? ", depositamt);

            Withdraw(&depositamt, withdrawamt);

            cout << endl << "Summary of Account";

            cout << endl << "---------------------";

            cout << endl << "Total Amount = " << depositamt << endl;
            break;
        }
        case 'L': {
            cout << setprecision(2);
            cout << fixed;
            creditrating = GetCreditRating();
            months = GetLoanMonths();
            intrate = GetInterestRate(creditrating);
            pamt = GetValue("How much you want to borrow?");
            lamount = CalculateLoanAmount(pamt, intrate, months);
            cout << endl << "Loan Summary";
            cout << endl << "---------------------";
            cout << endl << "Principal Amount = " << pamt;
            cout << endl << "Months = " << months;
            cout << endl << "Interest Rate = " << intrate;
            cout << endl << "Your Total Loan Amount is: " << lamount << endl;
            break;
        }
        default:
            break;
        }
    }
}


