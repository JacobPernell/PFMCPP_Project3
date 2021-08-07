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
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Foot
    {
        int stepForward();
        int stepSize();
    };

    void run(int howFast, bool startWithLeftFoot);

    Foot leftFoot;
    Foot rightFoot;
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if (startWithLeftFoot)
    {
        int leftFootStepSize = leftFoot.stepForward();
        rightFoot.stepForward();
    } 
    else 
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}



 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

 struct PlayStationFour
 {
    int numControllers = 2;
    std::string displayCableType = "HDMI";
    float electricityUsedPerDayInKWh = 28.9f;
    int numUsbPorts = 4;
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

    void playGame(Game game);
    void watchShow(std::string nameOfShow);
    Game ejectGameDisc(Game game);

    Game currentGame;
 };

struct MacbookPro
{   
    int numKeys = 78;
    std::string systemLanguage = "EN";
    float screenSizeInInches = 13.3f;
    int percentageBatteryRemaining = 59;
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

    void turnOnOff(int currentPowerStatus = 0);
    bool browseInternet(std::string websiteUrl);
    void downloadApp(App app, double hardDriveSpaceAvailable = 359.32);

    App favoriteApp;
};

 struct Iphone
 {
    float diagScreenSizeInches = 5.85f;
    std::string model = "iPhone 11 Pro";
    float monthlyCallMinsUsed = 108.3f;
    double minSpentBrowsingInstagramToday = 34.5;
    int numSideButtons = 3;

    float makeCall(std::string nameOfCallee);
    void sendText(std::string message);
    void setTimer(double duration);

 };

struct Corgi
{
    int numLegs = 4;
    float weightInPounds = 27.2f;
    float avgBarkLoudnessDb = 82.1f;
    std::string eyeColor = "Dark brown";
    int age = 7;

    void bark(float loudness);
    void begForTreats(int numOfTreats, float durationOfBeggingInMin = 248.2f);
    void playCatch(int numTimesThrowBall);
};

struct VRCamera
{
    float megapixels = 3.5f;
    float diameterInMm = 15.f;
    std::string resolution = "1832×1920";
    std::string colorMode = "Full color";
    float aperture = 4.f;

    void scanRoom(bool playerIsStanding = true);
    bool detectObstacles(bool hasAlreadyScannedRoom);
    void togglePasshroughView(bool isCurrentlyPassthroughView = false);
 };

struct VRLenses
{
    std::string typeOfCoating = "Anti-reflective";
    float lensDistanceInMm = 63.f;
    float prescriptionStrength = 6.25f;
    float widthInCm = 5.07f;
    float heightInCm = 4.89f;

    void viewGame(std::string game);
    float adjustLensDistance(float currentDistance, float amountToAdjust);
    void focusOnScreen(bool currentlyInFocus);
};

 struct VRControllers
 {
    int numButtons = 4;
    float wristStrapLengthInCm = 12.7f;
    float triggerPress = 0.f;
    float weightInGrams = 126.1f;
    float lengthInCm = 12.f;

    void pressButton(std::string button);
    bool trackingWorldSpace(std::string appName, bool gameIsRunning = false);
    float rumble(float rumbleIntensity);
 };

struct VRMemory
{
    double totalMemoryInGb = 6;
    double memoryUsedInGb = 1.432;
    double memoryAvailableInGb = 4.568;
    std::string typeOfMemory = "DDR4";
    std::string brandOfMemory = "Qualcomm";

    bool saveGameProgress(std::string currentCheckpoint, double memoryNeeded);
    void removeGameData(std::string gameName);
    void newGameDownload(double memoryNeeded);

};

 struct VRHeadStrap
 {
    float circumference = 53.2f;
    float lengthOfTopStrap = 295.5f;
    std::string typeOfMaterial = "Velcro";
    std::string colorOfStrap = "Gray";
    int numVelcroPads = 3;

    void tighten(float amountToTighten);
    void loosten(float amountToLoosten);
    void replaceStrap(std::string brandName);
 };

struct VRHeadset
{
    VRCamera camera;
    VRLenses lenses;
    VRControllers controllers;
    VRMemory memory;
    VRHeadStrap strap;

    float playGame(std::string gameName, int numPlayers = 2);
    void scanRoom(float roomWidthFeet = 12.4f, float roomHeightFeet = 14.3f);
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
