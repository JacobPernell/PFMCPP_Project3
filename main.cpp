/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call some of those amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.



struct PlayStationFour
{
    PlayStationFour();

    int numControllers;
    std::string displayCableType;
    float electricityUsedPerDayInKWh;
    int numUsbPorts;
    float minUsedPerWeek;

    struct Game
    {
        Game();

        std::string name;
        std::string genre;
        int maxNumPlayers;
        double sizeInGigabytes;
        bool isSequel;

        void downloadToLocalStorage(double amtGbNeededLocally = 10.3);
        void autoSave(double memoryNeededToSave, double minsSinceLastSave = 30.2);
        int getTimesPlayed(bool includeFriendPlaySessions);
    };

    void playGame(Game game);
    void watchShow(std::string nameOfShow);
    Game ejectGameDisc(Game game);

    // Game currentGame;
 };

 PlayStationFour::PlayStationFour()
 {
    std::cout << "created a PlayStationFour" << std::endl;
    numControllers = 2;
    displayCableType = "HDMI";
    electricityUsedPerDayInKWh = 28.9f;
    numUsbPorts = 4;
    minUsedPerWeek = 398.25f;
 }

 PlayStationFour::Game::Game()
 {
    std::cout << "created a PlayStationFour::Game" << std::endl;
    name = "Last of Us";
    genre = "Action Survival";
    maxNumPlayers = 1;
    sizeInGigabytes = 40.2;
    isSequel = false;
 }

void PlayStationFour::playGame(PlayStationFour::Game game)
{
    std::cout << "Playing: " << game.name << std::endl;
}

void PlayStationFour::watchShow(std::string nameOfShow)
{
    std::cout << "Watching: " << nameOfShow << std::endl;
}

PlayStationFour::Game PlayStationFour::ejectGameDisc(PlayStationFour::Game game)
{
    std::cout << "Ejecting " << game.name << std::endl;
    return game;
}

void PlayStationFour::Game::downloadToLocalStorage(double amtGbNeededLocally)
{
    std::cout << "Downloading game and taking up " << amtGbNeededLocally << " space." << std::endl;
}

void PlayStationFour::Game::autoSave(double memoryNeededToSave, double minsSinceLastSave)
{
    if (minsSinceLastSave > 1)
    {
        std::cout << "Saving game, taking up " << memoryNeededToSave;
    }
}

int PlayStationFour::Game::getTimesPlayed(bool includeFriendPlaySessions)
{
    return includeFriendPlaySessions ? 2 : 1;
}


struct MacbookPro
{   
    MacbookPro();

    int numKeys;
    std::string systemLanguage;
    float screenSizeInInches;
    int percentageBatteryRemaining;
    int numUsbPorts;

    struct App
    {
        App();

        std::string name;
        std::string developer;
        int numRatings;
        float rating;
        double sizeInGigabytes;

        void updateToLatestVersion(double versionNumber);
        void uninstall(bool saveUserPreferences = false);
        double installPackage(double packageSizeInGb);
    };

    void turnOnOff(int currentPowerStatus = 0);
    bool browseInternet(std::string websiteUrl);
    void downloadApp(App app, double hardDriveSpaceAvailable = 359.32);

    // App favoriteApp;
};

MacbookPro::MacbookPro()
{
    std::cout << "created a MacbookPro" << std::endl;
    numKeys = 78;
    systemLanguage = "EN";
    screenSizeInInches = 13.3f;
    percentageBatteryRemaining = 59;
    numUsbPorts = 2;
}

MacbookPro::App::App()
{
    std::cout << "created a MacbookPro::App" << std::endl;
    name = "Awesome App";
    developer = "Awesome Devs LLC";
    numRatings = 309;
    rating = 4.9f;
    sizeInGigabytes = 13.9;
}

void MacbookPro::turnOnOff(int currentPowerStatus)
{
    if (currentPowerStatus == 0)
    {
        currentPowerStatus = 1;
        std::cout << "Current power status is: " << currentPowerStatus << std::endl;
    }
    else
    {
        currentPowerStatus = 0;
        std::cout << "Current power status is: " << currentPowerStatus << std::endl;
    }
}

bool MacbookPro::browseInternet(std::string websiteUrl)
{
    if (websiteUrl != "")
    {
        std::cout << "Connected to website and now browsing!" << std::endl;
        return true;
    }
    std::cout << "Could not connect to website" << std::endl;
    return false;
}

void MacbookPro::downloadApp(MacbookPro::App app, double hardDriveSpaceAvailable)
{
    if (hardDriveSpaceAvailable > app.sizeInGigabytes)
    {
        std::cout << "Downloading app: " << app.name << std::endl;
    }
    else
    {
        std::cout << "Not enough space to download app" << std::endl;
    }
}


struct Iphone
{
    Iphone();

    float diagScreenSizeInches;
    std::string model;
    float monthlyCallMinsUsed;
    double minSpentBrowsingInstagramToday;
    int numSideButtons;

    float makeCall(std::string nameOfCallee);
    void sendText(std::string message);
    void setTimer(double duration);
};

Iphone::Iphone()
{
    std::cout << "created a Iphone" << std::endl;
    diagScreenSizeInches = 5.85f;
    model = "iPhone 11 Pro";
    monthlyCallMinsUsed = 108.3f;
    minSpentBrowsingInstagramToday = 34.5;
    numSideButtons = 3;
}

float Iphone::makeCall(std::string nameOfCallee)
{
    if (nameOfCallee != "Bob Smith")
    {
        std::cout << "Calling " << nameOfCallee << " for a short chat." << std::endl;
        return 20.f;
    }
    std::cout << "I don't feel like talking to Bob right now." << std::endl;
    return 0.f;
}

void Iphone::sendText(std::string message)
{
    std::cout << "Sending message: " << message << std::endl;
}

void Iphone::setTimer(double duration)
{
    std::cout << "Set timer for " << duration << " mins." << std::endl;
}


struct Corgi
{
    Corgi();

    int numLegs;
    float weightInPounds;
    float avgBarkLoudnessDb;
    std::string eyeColor;
    int age;

    void bark(float loudness);
    void begForTreats(int numOfTreats, float durationOfBeggingInMin = 248.2f);
    void playCatch(unsigned int numTimesThrowBall);
};

Corgi::Corgi()
{
    std::cout << "created a Corgi" << std::endl;
    numLegs = 4;
    weightInPounds = 27.2f;
    avgBarkLoudnessDb = 82.1f;
    eyeColor = "Dark brown";
    age = 7;
}

void Corgi::bark(float loudness)
{
    if (loudness > 50.f)
    {
        std::cout << "Corgi barked REALLY loud!" << std::endl;
    }
    else if (loudness > 10.f)
    {
        std::cout << "Corgi barked loud" << std::endl;
    }
    else
    {
        std::cout << "I barely heard anything" << std::endl;
    }
}

void Corgi::begForTreats(int numOfTreats, float durationOfBeggingInMin)
{
    if (numOfTreats > 3 && durationOfBeggingInMin > 300.f)
    {
        std::cout << "Corgi got lots of treats" << std::endl;
    }
    else
    {
        std::cout << "No treats for the corgi :(" << std::endl;
    }
}

void Corgi::playCatch(unsigned int numTimesThrowBall)
{
    if (numTimesThrowBall > 25)
    {
        std::cout << "Corgi is tired..." << std::endl;
    }
    else if (numTimesThrowBall > 5)
    {
        std::cout << "Corgi loves to play catch!" << std::endl;
    }
    else
    {
        std::cout << "Corgi is bored and wants to play more" << std::endl;
    }
}


struct VRCamera
{
    VRCamera();

    float megapixels;
    float diameterInMm;
    std::string resolution;
    std::string colorMode;
    float aperture;

    void scanRoom(bool playerIsStanding = true);
    bool detectObstacles(bool hasAlreadyScannedRoom);
    void togglePasshroughView(bool isCurrentlyPassthroughView = false);
};

VRCamera::VRCamera()
{
    std::cout << "created a VRCamera" << std::endl;
    megapixels = 3.5f;
    diameterInMm = 15.f;
    resolution = "1832×1920";
    colorMode = "Full color";
    aperture = 4.f;
}

void VRCamera::scanRoom(bool playerIsStanding)
{
    if (playerIsStanding)
    {
        std::cout << "Scanning room" << std::endl;
    }
    else
    {
        std::cout << "Please stand to scan room" << std::endl;
    }
}

bool VRCamera::detectObstacles(bool hasAlreadyScannedRoom)
{
    if (hasAlreadyScannedRoom)
    {
        std::cout << "Obstacle detected" << std::endl;
        return true;
    }
    std::cout << "Please scan room first" << std::endl;
    return false;
}

void VRCamera::togglePasshroughView(bool isCurrentlyPassthroughView)
{
    isCurrentlyPassthroughView = !isCurrentlyPassthroughView;
}


struct VRLenses
{
    VRLenses();

    std::string typeOfCoating;
    float lensDistanceInMm;
    float prescriptionStrength;
    float widthInCm;
    float heightInCm;

    void viewGame(std::string game);
    float adjustLensDistance(float currentDistance, float amountToAdjust);
    void focusOnScreen(bool currentlyInFocus);
};

VRLenses::VRLenses()
{
    std::cout << "created a VRLenses" << std::endl;
    typeOfCoating = "Anti-reflective";
    lensDistanceInMm = 63.f;
    prescriptionStrength = 6.25f;
    widthInCm = 5.07f;
    heightInCm = 4.89f;
}

void VRLenses::viewGame(std::string game)
{
    std::cout << "Currently viewing " << game << std::endl;
}

float VRLenses::adjustLensDistance(float currentDistance, float amountToAdjust)
{
    std::cout << "Current distance is " << currentDistance << std::endl;
    std::cout << "Distance adjusted by " << amountToAdjust << std::endl;
    std::cout << "New distance " << currentDistance - amountToAdjust << std::endl;

    return currentDistance - amountToAdjust;
}

void VRLenses::focusOnScreen(bool currentlyInFocus)
{
    if (currentlyInFocus)
    {
        std::cout << "Focused!" << std::endl;
    }
    else
    {
        std::cout << "Need to focus" << std::endl;
    }
}


struct VRControllers
{
    VRControllers();

    int numButtons;
    float wristStrapLengthInCm;
    float triggerPress;
    float weightInGrams;
    float lengthInCm;

    void pressButton(std::string button);
    bool trackingWorldSpace(std::string appName, bool gameIsRunning = false);
    void rumble(float rumbleIntensity);
 };

VRControllers::VRControllers()
{
    std::cout << "created a VRControllers" << std::endl;
    numButtons = 4;
    wristStrapLengthInCm = 12.7f;
    triggerPress = 0.f;
    weightInGrams = 126.1f;
    lengthInCm = 12.f;
}

void VRControllers::pressButton(std::string button)
{
    std::cout << "Button pressed: " << button << std::endl;
}

bool VRControllers::trackingWorldSpace(std::string appName, bool gameIsRunning)
{
    if (gameIsRunning)
    {
        std::cout << "Tracking world space for " << appName << std::endl;
        return true;
    }
    std::cout << "Cannot track world space when game is not running." << std::endl;
    return false;
}

void VRControllers::rumble(float rumbleIntensity)
{
    std::cout << "Rumbling controllers at intensity level: " << rumbleIntensity << std::endl;
}


struct VRMemory
{
    VRMemory();

    double totalMemoryInGb;
    double memoryUsedInGb;
    double memoryAvailableInGb;
    std::string typeOfMemory;
    std::string brandOfMemory;

    bool saveGameProgress(std::string currentCheckpoint, double memoryNeeded);
    void removeGameData(std::string gameName);
    void newGameDownload(double memoryNeeded);
};

VRMemory::VRMemory()
{
    std::cout << "created a VRMemory" << std::endl;
    totalMemoryInGb = 6;
    memoryUsedInGb = 1.432;
    memoryAvailableInGb = 4.568;
    typeOfMemory = "DDR4";
    brandOfMemory = "Qualcomm";
}

bool VRMemory::saveGameProgress(std::string currentCheckpoint, double memoryNeeded)
{
    if (memoryNeeded > 0)
    {
        std::cout << "Saving game at " << currentCheckpoint << std::endl;
        return true;
    }
    return false;
}

void VRMemory::removeGameData(std::string gameName)
{
    if (gameName != "")
    {
        std::cout << "Removing " << gameName << " from memory" << std::endl;
    }
}

void VRMemory::newGameDownload(double memoryNeeded)
{
    std::cout << "Taking up " << memoryNeeded << " to download game." << std::endl;
}


struct VRHeadStrap
{
    VRHeadStrap();

    float circumference;
    float lengthOfTopStrap;
    std::string typeOfMaterial;
    std::string colorOfStrap;
    int numVelcroPads;

    void tighten(float amountToTighten);
    void loosten(float amountToLoosten);
    void replaceStrap(std::string brandName);
};

VRHeadStrap::VRHeadStrap()
{
    std::cout << "created a VRHeadStrap" << std::endl;
    circumference = 53.2f;
    lengthOfTopStrap = 295.5f;
    typeOfMaterial = "Velcro";
    colorOfStrap = "Gray";
    numVelcroPads = 3;
}

void VRHeadStrap::tighten(float amountToTighten)
{
    if (amountToTighten < 100.f && amountToTighten > 0.f)
    {
        std::cout << "Tightening strap by " << amountToTighten << std::endl;
    }
}

void VRHeadStrap::loosten(float amountToLoosten)
{
    if (amountToLoosten < 100.f && amountToLoosten > 0.f)
    {
        std::cout << "Loostening strap by " << amountToLoosten << std::endl;
    }
}

void VRHeadStrap::replaceStrap(std::string brandName)
{
    if (brandName != "Bad brand name")
    {
        std::cout << "Replacing strap with high quality strap from " << brandName << std::endl;
    }
}


struct VRHeadset
{
    VRHeadset()
    {
        std::cout << "created a VRHeadset" << std::endl;
    }

    VRCamera camera;
    VRLenses lenses;
    VRControllers controllers;
    VRMemory memory;
    VRHeadStrap strap;

    float playGame(std::string gameName, unsigned int numPlayers = 2);
    void scanRoom(float roomWidthFeet = 12.4f, float roomHeightFeet = 14.3f);
    void trackHeadMovement(double acceleration, float xCoord, float yCoord, float zCoord);
};
/*
VRHeadset::VRHeadset()
{
    VRCamera camera;
    VRLenses lenses;
    VRControllers controllers;
    VRMemory memory;
    VRHeadStrap strap;
}
*/
float VRHeadset::playGame(std::string gameName, unsigned int numPlayers)
{
    if (numPlayers == 1)
    {
        std::cout << "Playing " << gameName << " by myself for a little while." << std::endl;
        return 20.5f;
    }
    else if (numPlayers > 1)
    {
        std::cout << "Playing " << gameName << " with friends for a long time!" << std::endl;
        return 100.f;
    }
    std::cout << "Not playing right now after all." << std::endl;
    return 0.f;
}

void VRHeadset::scanRoom(float roomWidthFeet, float roomHeightFeet)
{
    std::cout << "Scanning room..." << std::endl;
    std::cout << "Room has a width of " << roomWidthFeet << " and a height of " << roomHeightFeet << std::endl;
}

void VRHeadset::trackHeadMovement(double acceleration, float xCoord, float yCoord, float zCoord)
{
    std::cout << "Tracking head movement..." << std::endl;
    std::cout << "Current stats: Acceleration - " << acceleration << "\n" << "x coordinate - " << xCoord << "\n" << "y coordinate - " << yCoord << "\n" << "z coordinate - "  << zCoord << std::endl;
}

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
    Example::main();

    PlayStationFour newPS4;
    PlayStationFour refurbishedPS4;
    PlayStationFour::Game borrowedGame;
    MacbookPro workLaptop;
    MacbookPro::App timeTrackerApp;
    Iphone personalCellPhone;
    Corgi apollo;
    /*
    VRCamera vrCamera;
    VRLenses vrLenses;
    VRControllers vrControllers;
    VRMemory vrMem;
    VRHeadStrap headStrap;
    */
    VRHeadset oculusQuest;

    newPS4.watchShow("Lupin");
    refurbishedPS4.playGame(borrowedGame);
    
    workLaptop.downloadApp(timeTrackerApp, 359.32);
    std::cout << workLaptop.systemLanguage << std::endl;

    personalCellPhone.setTimer(23);

    apollo.bark(49);

    /*
    vrCamera.detectObstacles(true);
    std::cout << "VR camera has " << vrCamera.megapixels << " megapixels." << std::endl;

    vrLenses.viewGame("Awesome Game");

    vrControllers.pressButton("A button");
    std::cout << (vrControllers.weightInGrams > 300 ? "The controllers are heavy" : "The controllers aren't heavy") << std::endl;

    vrMem.saveGameProgress("Checkpoint A", 32.0);

    headStrap.loosten(20.0f);
    */
    
    oculusQuest.trackHeadMovement(39, 5.9f, 3.3f, 2.4f);

    std::cout << "good to go!" << std::endl;
}
