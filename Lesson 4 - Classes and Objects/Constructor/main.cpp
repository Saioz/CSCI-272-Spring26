
#include <iostream>
#include "Car.h"
using namespace std;


/*
Name: Anthony Lin 
Course: CSCI 272
Lesson Number Lesson 4 
Code Topic: constructors
Date: 3/3/2026

*/



int main()
{
    Car car1;
    //this will just use the volkswagen and whatever is default 

    car1.specs();
    //I made this method to print out the specs by itself of the objects that I made. For instance car1 will just print all the stuff about car1.
    
    Car car2("Tesla", "X", 2022);
    Car car3(car2);
    Car* pCar1 = new Car;
    Car* pCar2 = new Car("Tesla", "X", 2022);

    
    Car carArray[5];
    
    
    for (int i = 0; i < sizeof(carArray) / sizeof(carArray[0]); i++) {
        //this could give an issue of the element is a different amount of bytes
        
        carArray[i].specs();
    }
    
    //I FIXED IT
    
    
    
    
    delete pCar1;
    delete pCar2;
    //deallocates the memory that was used
    
    /*
reflection:
1. What I understood:
I understand what constructors are, how they can be used. How if you make parameters for a constructor
and then create an object without any parameters, as long as you made an empty constructor, like with car1 you'll be able to have defaulting
values that take the place.


2.Difficulties:
I was trying to use the for loop to go through and run car. But unfortunately it did not work, I will have to mess around with it more to figure
this out. Very strange, It makes sense to me, but for some reason there are a bunch of issues. 

3.Research:
I was very interested in finding out why the loop didn't work, so I looked at your example and then realized I was using cout two times, once in the
function void and then once more in my loop, so what I was doing was cout << object.function() and the function had a cout << inside of it. So that 
made it not run.

4.AI usage:
I did not use AI in this lesson
5.What I learned: 
I learned a lot, that you can't have cout<< when you're using it within the function to print itself. and that parameter-less constructors exist and work.
They just return the default values or hold the default values of the object.
 


*/

}