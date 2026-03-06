#include <iostream>
using namespace std;

class User {
    private:
        string username;
        string password;
    public:
        User(const string& uname, const string& pwd) {
            username = uname;
            password = pwd;
                
    }
    bool login(const string& inputUser, const string& inputPwd) const {
        return (inputUser==username) && (inputPwd == password);
        //returns true if BOTH the username is equal to teh username and the password is equal to the password. 
        //Basically just checks if it's correct.
            
    }
    bool manualLogin() const {
        string inputUser, inputPwd;
        
        cout << "-----=== Manual Login ===----" << endl;
        cout << "Username: ";
        cin >> inputUser;
        
        cout << "Password: ";
        cin >> inputPwd;
        
        return login(inputUser, inputPwd);
        //manually login and using the input and output it'll run it through to the login function and return a boolean!
    }
    
    
    void updatePassword(string& newPwd) {
        password = newPwd;
        //changes the password
    }

};