/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you can use 'std::string' to represent strings in this project.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  

    Move the Thing 10 pseudo-code to after your Thing1-4 in the project.
*/






/*
Thing 1) PlayStation 4
5 properties:
    1) number of controllers
    2) type of display cable attached
    3) amount of electricity used per day
    4) number of usb ports
    5) amount of time on per week
3 things it can do:
    1) play games
    2) watch Netflix shows
    3) take in/eject a game disk
 */

/*
Thing 2) Macbook Pro laptop
5 properties:
    1) number of keys
    2) system language
    3) size of screen
    4) battery life remaining
    5) number of usb ports
3 things it can do:
    1) turn off/on
    2) browse the internet
    3) download apps
 */

/*
Thing 3) iPhone
5 properties:
    1) size of screen
    2) model number
    3) number of call minutes used this month
    4) time spent browsing instagram
    5) number of side buttons
3 things it can do:
    1) make calls
    2) send texts
    3) set a timer
 */

/*
Thing 4) corgi
5 properties:
    1) number of legs
    2) weight
    3) average loudness of bark in dB
    4) color of eyes
    5) age
3 things it can do:
    1) bark
    2) beg for treats
    3) play catch
 */

/*
Thing 10) VR headset
5 properties:
    1) External camera
    2) Internal screen
    3) Controllers
    4) Memory
    5) Head strap
3 things it can do:
    1) Play games
    2) Scan room
    3) Track head movement
 */


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
