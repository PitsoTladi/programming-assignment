#include <iostream>
using namespace std;


int main(){
    double monthly_charge;
    double acc_balance;
    double overdraft_fee= 0.00;
    string acc_holder;
    double admin_fee;
    int number_withdrawn;
    double withdraw_amounts;
    double withdrwal_charge;
    cout<< "enter the account holder name ";
    getline(cin , acc_holder) ;
 
    cout << "enter current account balance ";
    cin >> acc_balance;
    cout << acc_balance;

    if

    double total_charge = admin_fee +(withdraw_amounts * withdrwal_charge)





   
}



/*
Write a C++ program to calculate the **monthly bank charges** for Capitec Bank savings account holder based on 
their withdrawal details. The program should consider various factors specific to Capitec Bank, such as the 
**monthly admin fee**, **withdrawal charges**, and **overdraft penalties**. The program should prompt the user to input 
the **account holder's name**, **current balance**, **number of withdrawals made**, and **withdrawal amounts for the 
month**.
Calculate the total charges using the formula: 
total_charges = monthly_admin_fee + (withdrawals * withdrawal_charge) + overdraft_penalty, where 
overdraft_penalty is R375 if the balance falls below R0.00. 
For Capitec savings accounts, the withdrawal charge is R22.50 per withdrawal after the first four free withdrawals, 
and the monthly admin fee is R5.00.
Display the calculated charges for the account holder in a detailed format showing
• Account holder's name
• Initial balance
• Number of withdrawals
• Breakdown of charges (admin fee, withdrawal charges, penalties)
• Final balance after deducting all charges
NB: The program should also validate that withdrawal amounts do not exceed the available balance unless the 
account holder has overdraft facility
*/