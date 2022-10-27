#include <iostream>
#include <string>
#include "checkingmodule.h"

using namespace std;


void deposit(float& account, float amount) {

    account += amount;
}


char MainMenu() {
    char userchoice = ' ';
    
    while (userchoice != 'D' && userchoice!= 'W' && userchoice!= 'L' && userchoice !='Q') {
        cout << "Main menu - Enter one of the following \n" << "    (D)eposit, (W)ithdrawl, (L)oan or (Q)uit" << endl;
        cin >> userchoice;
        userchoice = toupper(userchoice);
    }
    return userchoice;
}



float GetValue(string message)
{
    float val;
    do
    {
        cout << message << " ==> ";
        cin >> val;
        if (val <= 0)
            cout << endl << "You must enter a value greater than 0" << endl;
    }
    while (val <= 0);
    return val;
}

float GetValue(string message, float limit)
{
    float val;
    do
    {
        cout << endl << message << " ==>";
        cin >> val;
        if (val<0 || val>limit)
            cout << "Enter a value within the range 0 to " << limit;
    }
    while (val<0 || val>limit);
    return val;
}

float GetInterestRate(float creditscore)
{
    float interest;
    if (creditscore <= 500)
        interest = 0.05;
    else if (creditscore <= 700)
        interest = 0.03;
    else
        interest = 0.01;
    return interest;
}

void Withdraw(float* bal, float amt)
{
    *bal = *bal - amt;
    return;

}

int GetLoanMonths(void)
{
    int months;
    do
    {
        cout << endl << "How many months for the loan (12, 24, 36, 60)? ==> ";
        cin >> months;
        if (months == 0 || months % 12 != 0)
            cout << "You must choose months from 12, 24, 36, 60";
    }
    while (months == 0 || months % 12 != 0);
    return months;
}

float GetCreditRating(void)
{
    float creditrating;
    do
    {
        cout << endl << "What is your credit rating [300,800]? ==> ";
        cin >> creditrating;
        if (creditrating < 300 || creditrating>800)
            cout << endl << "You must choose a credit rating from [300,800]";
    }
    while (creditrating < 300 || creditrating>800);
    return creditrating;
}

float CalculateLoanAmount(float pamt, float interest, int months)
{
    float loanamt;
    loanamt = pamt * pow((1 + (interest / 12)), months / 12.0);
    return loanamt;
}