/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar(Car car); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior(Car car);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};




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
 struct PlayStationFour
 {
    // 1) number of controllers
    int numControllers = 2;
    // 2) type of display cable attached
    std::string displayCableType = "HDMI";
    // 3) amount of electricity used per day
    float electricityUsedPerDayInKWh = 28.9f;
    // 4) number of usb ports
    int numUsbPorts = 4;
    // 5) amount of time on per week in min
    float minUsedPerWeek = 398.25f;

    struct Game
    {
        std::string name = "Last of Us";
        std::string genre = "Action Survival";
        int maxNumPlayers = 1;
        double sizeInGigabytes = 40.2;
        bool isSequel = false;

        void downloadToLocalStorage(double amtGbNeededLocally = 10.3);
        void autoSave(double memoryNeededToSave, double minsSinceLastSave = 30.2);
        int getTimesPlayed(bool includeFriendPlaySessions);
    };

    // 1) play games
    void playGame(Game game);
    // 2) watch Netflix shows
    void watchShow(std::string nameOfShow);
    // 3) take in/eject a game disc
    Game ejectGameDisc(Game game);
 };

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
    1) amount of megapixels
    2) diameter in mm
    3) resolution
    4) color mode
    5) aperture
3 things it can do:
    1) scan room to create play boundary
    2) detect dangerous obstacles in physical space
    3) 'pass through' view while wearing headset
 */

/*
Thing 6) VR: Lenses
5 properties:
    1) type of coating
    2) distance between the two lenses
    3) prescription strength
    4) width
    5) height
3 things it can do:
    1) view game/content
    2) adjust lens distance
    3) focus on screen
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
