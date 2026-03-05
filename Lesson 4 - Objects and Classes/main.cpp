
#include <iostream>
#include "Person.h"

using namespace std;



/*
Name: Anthony Lin 
Course: CSCI 272
Lesson Number Lesson 4 
Code Topic: Copy constructor Example
Date: 3/3/2026

*/



int main()
{
Person person1;
person1.introduce();
//If I wanted to change it a little I could create constructors for it instead. Then I could set parameters instead of having to change it individually. person1.name person1.age person1.gender for instance. 
    
}

/*
Reflection : 

1. What I understood : 
I understand how if else loops work within the Person.h class. 
That changes outside the file, in the main file can also reflect onto the Person.h
like when you change the genders from m to f or m to f you're able to use 
the if else loop to change what prints out.

2. Difficulties:
Initially, I did not understand why my code was not running, and then I realized that I needed to 
end classes with a semicolon, otherwise it would not compile.
3. Research:
I had to search online what made a big difference in running with void or without. It's kind of similar 
but void makes it so that there's no need for a return value. Then you could call it multiple times without doing anything convoluted. 

4. AI Usage: 
I used chatGPT to ask questions and help me find reliable sources and pages for research.

5.What I learned: 
I learned what void does, how to use constructors (Although I didn't actually leave it in my final version, I played around and learned about overloading and how to default and create parameters for a constructor)

*/


