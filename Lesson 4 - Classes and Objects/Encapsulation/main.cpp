
#include <iostream>
#include "User.h"

using namespace std;

/*
Name: Anthony Lin 
Course: CSCI 272
Lesson Number Lesson 4 
Code Topic: encapsulation+
Date: 3/3/2026

*/


int main()
{

User user1("userName", "password");
// an object named user1 with password and username 

bool success = user1.login("userName", "password");
//just checks if the username and password are the username

if(success) {
    //if it runs and is true
    cout << "User logged in successfully!!!!!" << endl;
    
}
else {
    cout << "Login Failed :( Please log in again and check the username OR password. CASE SENSITIVE" << endl;
}


}

/*
reflection:
1. What I understood:
Making an authentication tool with functions in c++ is not as hard as people make it out to be. At least the basics aren't too difficult to understand.

2.Difficulties:
I had trouble understanding why my code didn't run, it was almost syntactically identical to the examples. Then I realized that I made a 
mistake when I created the User class. I named it class User() {} which was kind of hard to figure out until I looked at the error message that it 
gave me and asked chatGPT why it was giving me this repeatedly despite having no other errors in the code.

3.Research:
I looked through the slides you provided as there was good documentation, and then I ran the one that was provided and compared it with my own. 
I changed some things while I created mine and learned more about how to use encapsulation in my own code. 

4.AI usage:
I used chatGPT to diagnose an issue I had with case sensitivity and also User() <--- the parenthesis.


5.What I learned: 
I learned that you can PUT return values back into other functions. Like with the manual login, you can put the returned values into another function.
It's super interesting and allows for so much more possibilities and code recycling.


*/
