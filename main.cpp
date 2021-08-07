 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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

    Game currentGame;
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
struct MacbookPro
{   
    // 1) number of keys
    int numKeys = 78;
    // 2) system language
    std::string systemLanguage = "EN";
    // 3) size of screen
    float screenSizeInInches = 13.3f;
    // 4) battery life remaining
    int percentageBatteryRemaining = 59;
    // 5) number of usb ports
    int numUsbPorts = 2;

    struct App
    {
        std::string name = "Awesome App";
        std::string developer = "Awesome Devs LLC";
        int numRatings = 309;
        float rating = 4.9f;
        double sizeInGigabytes = 13.9;

        void updateToLatestVersion(double versionNumber);
        void uninstall(bool saveUserPreferences = false);
        double installPackage(double packageSizeInGb);
    };

    // 1) turn off/on
    void turnOnOff(int currentPowerStatus = 0);
    // 2) browse the internet
    bool browseInternet(std::string websiteUrl); // for the sake of practice, I'm thinking the return type of this could be a true/false value if it successfully connected to the website
    // 3) download apps
    void downloadApp(App app, double hardDriveSpaceAvailable = 359.32);

    App favoriteApp;
};

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
 struct Iphone
 {
    // 1) size of screen
    float diagScreenSizeInches = 5.85f;
    // 2) model number
    std::string model = "iPhone 11 Pro";
    // 3) number of call minutes used this month
    float monthlyCallMinsUsed = 108.3f;
    // 4) time spent browsing instagram
    double minSpentBrowsingInstagramToday = 34.5;
    // 5) number of side buttons
    int numSideButtons = 3;

    // 1) make calls
    float makeCall(std::string nameOfCallee);
    // 2) send texts
    void sendText(std::string message);
    // 3) set a timer
    void setTimer(double duration);

 };

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
struct Corgi
{
    // 1) number of legs
    int numLegs = 4;
    // 2) weight
    float weightInPounds = 27.2f;
    // 3) average loudness of bark in dB
    float avgBarkLoudnessDb = 82.1f;
    // 4) color of eyes
    std::string eyeColor = "Dark brown";
    // 5) age   
    int age = 7;

    // 1) bark
    void bark(float loudness);
    // 2) beg for treats
    void begForTreats(int numOfTreats, float durationOfBeggingInMin = 248.2f);
    // 3) play catch
    void playCatch(int numTimesThrowBall);
};

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
 struct VRCamera
 {
    // 1) amount of megapixels
    float megapixels = 3.5f;
    // 2) diameter in mm
    float diameterInMm = 15.f;
    // 3) resolution
    std::string resolution = "1832×1920";
    // 4) color mode
    std::string colorMode = "Full color";
    // 5) aperture
    float aperture = 4.f;

    // 1) scan room to create play boundary
    void scanRoom(bool playerIsStanding = true);
    // 2) detect dangerous obstacles in physical space
    bool detectObstacles(bool hasAlreadyScannedRoom);
    // 3) 'pass through' view while wearing headset
    void togglePasshroughView(bool isCurrentlyPassthroughView = false);
 };

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
struct VRLenses
{
    // 1) type of coating
    std::string typeOfCoating = "Anti-reflective";
    // 2) distance between the two lenses
    float lensDistanceInMm = 63.f;
    // 3) prescription strength
    float prescriptionStrength = 6.25f;
    // 4) width
    float widthInCm = 5.07f;
    // 5) height
    float heightInCm = 4.89f;

    // 1) view game/content
    void viewGame(std::string game);
    // 2) adjust lens distance
    float adjustLensDistance(float currentDistance, float amountToAdjust);
    // 3) focus on screen
    void focusOnScreen(bool currentlyInFocus);
};

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
 struct VRControllers
 {
    // 1) number of buttons
    int numButtons = 4;
    // 2) length of wrist strap
    float wristStrapLengthInCm = 12.7f;
    // 3) trigger depth press
    float triggerPress = 0.f;
    // 4) weight of controller
    float weightInGrams = 126.1f;
    // 5) length of controller
    float lengthInCm = 12.f;

    // 1) press buttons to interact with game
    void pressButton(std::string button);
    // 2) track in VR space
    bool trackingWorldSpace(std::string appName, bool gameIsRunning = false);
    // 3) rumble with haptic feedback
    float rumble(float rumbleIntensity);
 };

/*
Thing 8) VR: Memory
5 properties:
    1) amount of total memory
    2) amount of memory used
    3) amount of memory available
    4) type of memory
    5) brand of memory
3 things it can do:
    1) Save game progress
    2) Remove game data
    3) Store new game download
 */
struct VRMemory
{
    // 1) amount of total memory
    double totalMemoryInGb = 6;
    // 2) amount of memory used
    double memoryUsedInGb = 1.432;
    // 3) amount of memory available
    double memoryAvailableInGb = 4.568;
    // 4) type of memory
    std::string typeOfMemory = "DDR4";
    // 5) brand of memory
    std::string brandOfMemory = "Qualcomm";

    // 1) Save game progress
    bool saveGameProgress(std::string currentCheckpoint, double memoryNeeded);
    // 2) Remove game data
    void removeGameData(std::string gameName);
    // 3) Store new game download
    void newGameDownload(double memoryNeeded);

};

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
 struct VRHeadStrap
 {
    // 1) length of circumference
    float circumference = 53.2f;
    // 2) length of top strap
    float lengthOfTopStrap = 295.5f;
    // 3) type of material
    std::string typeOfMaterial = "Velcro";
    // 4) color of strap
    std::string colorOfStrap = "Gray";
    // 5) number of velcro pads
    int numVelcroPads = 3;

    // 1) tighten
    void tighten(float amountToTighten);
    // 2) loosten
    void loosten(float amountToLoosten);
    // 3) be replaced with new strap
    void replaceStrap(std::string brandName);
 };

/*
Thing 10) VR headset
5 properties:
    1) External camera
    2) Lenses
    3) Controllers
    4) Memory
    5) Head strap
3 things it can do:
    1) Play games
    2) Scan room
    3) Track head movement
 */
struct VRHeadset
{
    // 1) External camera
    VRCamera camera;
    // 2) Lenses
    VRLenses lenses;
    // 3) Controllers
    VRControllers controllers;
    // 4) Memory
    VRMemory memory;
    // 5) Head strap
    VRHeadStrap strap;

    // 1) Play games
    // Or should this be something like lenses::viewGame(); ?
    float playGame(std::string gameName, int numPlayers = 2);
    // 2) Scan room
    void scanRoom(float roomWidthFeet = 12.4f, float roomHeightFeet = 14.3f);
    // 3) Track head movement
    void trackHeadMovement(double acceleration, float xCoord, float yCoord, float zCoord);
};

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
