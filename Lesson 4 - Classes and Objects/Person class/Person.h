#include <iostream>
using namespace std;


class Person {
    
 
        
    public: 
        string name = "Anthony";
        int age = 19;
        char gender = 'M';
        // This creates a publically accessible variables.
        //For instance if I wanted to change this I could call on an object that I created and then do for instance person1.name = "jeff"; then it would change person1's name into jeff. 
    public: 
        void introduce() {
            // void removes the need for it to return anything
            cout << "Hello, I'm " << name << ". I am " << age << " years old.";
            
            if(gender == 'M') {
                cout << " I'm a male." << endl;
            }
            else if (gender == 'F') {
                cout << " I'm a female." << endl;
             }
            else {
                cout << " Gender unspecified." << endl;
            // this if else chain just makes it so that if I change the gender of the person then it would be adjusted accordingly. 
            }
        }
};
