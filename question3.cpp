#include <iostream>
using namespace std;


int main(){

    // fees 
    const double monthly_admin_charge = 5.00;
    const double overdraft_fee= 375.00;
    const double  withdrawal_fee = 22.00;
    const int uncharged_withdrawals = 4;



    //user variables
    double acc_balance;
    string acc_holder;
    char overdraft;
    double admin_fee;
    int number_withdrawn;
    double withdraw_amount;
    double total_charge;
    

    cout<< "enter the account holder name ";
    getline(cin , acc_holder) ;
 
    cout << "enter current account balance ";
    cin >> acc_balance;
   

    cout << "enter number of withdrawals made ";
    cin >> number_withdrawn;
    

    cout << "enter Amount of withdrwals made for the month";
    cin >> number_withdrawn;
    

    

   cout << "enter withdrawal amout : R ";
    cin >> withdraw_amount;
   if(withdraw_amount > acc_balance){
    cout << "do you have access to an overdraft facility reply [y/n] ";
    cin >> overdraft;

    if(overdraft == 'y'){
        cout << "withdrawal amount cannot exceed available balance";
    }
    else if(overdraft == 'y'){
        acc_balance = acc_balance -  withdraw_amount;

    }
   }
    
    cout << "Account holder: " << acc_holder <<"\nAccount Balance: " <<  acc_balance << "\neNumber of withdrawals: "<< number_withdrawn<< "\nFee breakdown:\n overdraft fee"<< overdraft_fee <<"\nAmdmin fee: "<< "\n" <<endl;




 

   
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