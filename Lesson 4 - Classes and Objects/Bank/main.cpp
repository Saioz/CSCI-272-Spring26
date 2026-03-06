/*
Name: Anthony Lin 
Course: CSCI 272
Lesson Number Lesson 4 
Code Topic: controlled access using public methods*
Date: 3/3/2026

*/
#include "BankAccount.h"
#include <iostream>

using namespace std;

int main() {
    
    BankAccount bankAccount1;
    //initializing an object called bankAccount1
    
    
    
    bankAccount1.deposit(55.5);
    //using a public method to access bankAccount1 and adding 55.55
    
    bankAccount1.printBalance();
    //a void method to print out the balance of the account.
    
    

}
/*
reflection:
1. What I understood:
I understand that accessing a private using public methods is called encapsulation. For instance, when we created balance, 
then accessed the private balance by using a public method like deposit() to add money to the balance. That would be encapsulation. 
2.Difficulties:
I did not face any difficulties, but I thought it was interesting to bring up why the model example in the slides did not make a void method to print out the
balance, but instead chose to do  cout << balance * 

3.Research:
I used the internet and looked at the slides whenever I did not understand anything. These slides were very straightforward.


4.AI usage:
I did not use AI.

5.What I learned: 
I learned about encapsulation, what it is, why it's useful and how to manipulate private values using public methods. Very interesting and has real life consequences if people can change whatever their bank balance is. 


*/
