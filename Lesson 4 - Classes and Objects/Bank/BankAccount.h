
#include <iostream>
using namespace std;

class BankAccount {
    private: 
        double balance = 0.0;
        //making a private variable that holds balance information
        
        
        
    public: 
        void printBalance() {
            cout << "This is your current balance: $" << getBalance(); 
            //you can call a function in another function! In this case I used getBalance to get the balance and then used it combined with the text from printBalance.
            //this would be useful if you are doing math with it. For example you owe some money or need to borrow some money, it could remove or add the money from your balance. Or add to your balance or add to a different account. 
            
        }
        double getBalance() const {
            return balance; 
        } //this also gets balance, but only the value. Does not print anything else. 
        
        void deposit(double amount){
            balance+=amount;
            //adds to the balance by whatever you set the deposit to balance
        }
        
    
    
};