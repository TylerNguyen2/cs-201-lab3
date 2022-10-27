#pragma once
#ifndef CHECKINGMODULE_H
#define CHECKINGMODULE_H

#endif // !CHECKINGMODULE_H

using namespace std;

void deposit(float& account, float amount);

char MainMenu();

float GetValue(string message);

float GetValue(string message, float limit);

float GetInterestRate(float creditscore);

void Withdraw(float* bal, float amt);

int GetLoanMonths(void);

float GetCreditRating(void);

float CalculateLoanAmount(float pamt, float interest, int months);




