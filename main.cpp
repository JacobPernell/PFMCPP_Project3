/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************
0) move 5-9 to between your Thing 4 and Thing 10.

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
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
Thing 5) VR: External camera
5 properties:
    1) amount of megapixels on camera
    2) camera diameter in mm
    3) camera resolution
    4) camera color mode
    5) camera aperture
3 things it can do:
    1) scan room to create play boundary
    2) detect dangerous obstacles in physical space
    3) 'pass through' view while wearing headset
 */

/*
Thing 6) VR: Internal screen
5 properties:
    1) number of pixels in each lens
    2) distance between the two screen lenses
    3) screen refresh rate
    4) lens width
    5) lens height
3 things it can do:
    1) display game/content
    2) adjust lens distance
    3) turn on/off
 */

/*
Thing 7) VR: Controllers
5 properties:
    1) number of buttons
    2) length of wrist strap
    3) trigger depth press
    4) weight of controller
    5) length of controller
3 things it can do:
    1) press buttons to interact with game
    2) track in VR space
    3) rumble with haptic feedback
 */

/*
Thing 8) VR: Memory
5 properties:
    1) amount of total memory
    2) amount of memory used
    3) amount of memory available
    4) type of memory (e.g. nvme)
    5) brand of memory (e.g. WD, seagate)
3 things it can do:
    1) Save game progress
    2) Remove game data
    3) Store new game download
 */

/*
Thing 9) Head strap
5 properties:
    1) length of circumference
    2) length of top strap
    3) type of material
    4) color of strap
    5) number of velcro pads
3 things it can do:
    1) tighten
    2) loosten
    3) be replaced with new strap
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
