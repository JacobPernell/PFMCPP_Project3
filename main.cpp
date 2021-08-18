/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; // in-class initialization
    UDT() : a(0) { } // 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()




struct PlayStationFour
{
    int numControllers = 2;
    std::string displayCableType = "HDMI";
    float electricityUsedPerDayInKWh = 28.9f;
    int numUsbPorts = 4;
    float minUsedPerWeek = 0.0f;

    PlayStationFour()
    {
        std::cout << "created a PlayStationFour" << std::endl;
    }

    struct Game
    {
        Game()
        {
            std::cout << "created a PlayStationFour::Game" << std::endl;
        }

        std::string name = "Game Name";
        std::string genre = "Game Genre";
        int maxNumPlayers = 4;
        double sizeInGigabytes = 0;
        bool isSequel = false;

        void downloadToLocalStorage(double amtGbNeededLocally = 10.3)
        {
            std::cout << "Downloading game and taking up " << amtGbNeededLocally << " space." << std::endl;
        }

        void autoSave(double memoryNeededToSave, double minsSinceLastSave = 30.2)
        {
            if (minsSinceLastSave > 1)
            {
                std::cout << "Saving game, taking up " << memoryNeededToSave << std::endl;
            }
            else
            {
                std::cout << "Will autosave again after 1 minute" << std::endl;
            }
        }

        int getTimesPlayed(bool includeFriendPlaySessions)
        {
            return includeFriendPlaySessions ? 2 : 1;
        }
    };

    void playGame(Game game)
    {
        std::cout << "Playing: " << game.name << std::endl;
    }

    void watchShow(std::string nameOfShow)
    {
        std::cout << "Watching: " << nameOfShow << std::endl;
    }

    Game ejectGameDisc(Game game)
    {
        std::cout << "Ejecting " << game.name << std::endl;
        return game;
    }
 };


struct MacbookPro
{   
    MacbookPro()
    {
        std::cout << "created a MacbookPro" << std::endl;
    }

    int numKeys = 78;
    std::string systemLanguage = "EN";
    float screenSizeInInches = 13.3f;
    int percentageBatteryRemaining = 100;
    int numUsbPorts = 2;

    struct App
    {
        App()
        {
            std::cout << "created a MacbookPro::App" << std::endl;
        }

        std::string name = "App Name";
        std::string developer = "Developer Name";
        int numRatings = 0;
        float rating = 5.0f;
        double sizeInGigabytes = 0;

        void updateToLatestVersion(double versionNumber)
        {
            std::cout << "Updated " << name << " to version number " << versionNumber << std::endl;
        }

        void uninstall(bool saveUserPreferences = false)
        {
            if (saveUserPreferences)
            {
                std::cout << "Uninstalled " << name << " by " << developer << " and saved user preferences" << std::endl;
            }
            else
            {
                std::cout << "Uninstalled " << name << " by " << developer << " and DID NOT save user preferences" << std::endl;
            }
        }

        double installPackage(double packageSizeInGb)
        {
            std::cout << "Installed app package for " << packageSizeInGb << "gb" << std::endl;
            sizeInGigabytes += packageSizeInGb;
            std::cout << "New total pacakge size is " << sizeInGigabytes << "gb" << std::endl;
            return sizeInGigabytes;
        }
    };

    void turnOnOff(int currentPowerStatus = 0)
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

    bool browseInternet(std::string websiteUrl)
    {
        if (websiteUrl != "")
        {
            std::cout << "Connected to " << websiteUrl << " and now browsing!" << std::endl;
            return true;
        }
        std::cout << "Could not connect to " << websiteUrl << std::endl;
        return false;
    }

    void downloadApp(App app, double hardDriveSpaceAvailable = 359.32)
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

};


struct Iphone
{
    Iphone()
    {
        std::cout << "created a Iphone" << std::endl;
    }

    float diagScreenSizeInches = 5.85f;
    std::string model = "iPhone 11 Pro";
    float monthlyCallMinsUsed = 0.0f;
    double minSpentBrowsingInstagramToday = 0.0;
    int numSideButtons = 3;

    float makeCall(std::string nameOfCallee)
    {
        if (nameOfCallee != "Bob Smith")
        {
            std::cout << "Calling " << nameOfCallee << " for a short chat." << std::endl;
            monthlyCallMinsUsed += 20.0f;
            return monthlyCallMinsUsed;
        }
        std::cout << "I don't feel like talking to Bob right now." << std::endl;
        return monthlyCallMinsUsed;
    }

    void sendText(std::string message)
    {
        std::cout << "Sending message: " << message << std::endl;
    }

    void setTimer(double duration)
    {
        std::cout << "Set timer for " << duration << " mins." << std::endl;
    }
};


struct Corgi
{
    Corgi()
    {
        std::cout << "created a Corgi" << std::endl;
    }

    int numLegs = 4;
    float weightInPounds = 27.2f;
    float avgBarkLoudnessDb = 82.1f;
    std::string eyeColor = "Dark brown";
    int age = 7;

    void bark(float loudness)
    {
        if (loudness > 100.f)
        {
            std::cout << "Corgi barked REALLY loud!" << std::endl;
            std::cout << "That's " << loudness - avgBarkLoudnessDb << " dB louder than average!" << std::endl;
        }
        else if (loudness > 50.f)
        {
            std::cout << "Corgi barked loud" << std::endl;
        }
        else
        {
            std::cout << "I barely heard anything" << std::endl;
        }
    }

    void begForTreats(int numOfTreats, float durationOfBeggingInMin = 248.2f)
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

    void playCatch(unsigned int numTimesThrowBall)
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
};


struct VRCamera
{
    VRCamera()
    {
        std::cout << "created a VRCamera" << std::endl;
    }

    float megapixels = 3.5f;
    float diameterInMm = 15.0f;
    std::string resolution = "1832×1920";
    std::string colorMode = "Full color";
    float aperture = 4.0f;

    void scanRoom(bool playerIsStanding = true)
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

    bool detectObstacles(bool hasAlreadyScannedRoom)
    {
        if (hasAlreadyScannedRoom)
        {
            std::cout << "Obstacle detected" << std::endl;
            return true;
        }
        std::cout << "Please scan room first" << std::endl;
        return false;
    }

    void togglePasshroughView(bool isCurrentlyPassthroughView = false)
    {
        isCurrentlyPassthroughView = !isCurrentlyPassthroughView;
    }
};


struct VRLenses
{
    VRLenses()
    {
        std::cout << "created a VRLenses" << std::endl;
    }

    std::string typeOfCoating = "Anti-reflective";
    float lensDistanceInMm = 63.0f;
    float prescriptionStrength = 6.25f;
    float widthInCm = 5.07f;
    float heightInCm = 4.89f;

    void viewGame(std::string game)
    {
        std::cout << "Currently viewing " << game << std::endl;
    }

    float adjustLensDistance(float currentDistance, float amountToAdjust)
    {
        std::cout << "Current distance is " << currentDistance << std::endl;
        std::cout << "Distance adjusted by " << amountToAdjust << std::endl;
        std::cout << "New distance " << currentDistance - amountToAdjust << std::endl;

        return currentDistance - amountToAdjust;
    }

    void focusOnScreen(bool currentlyInFocus)
    {
        if (currentlyInFocus)
        {
            std::cout << "Focused!" << std::endl;
            std::cout << "You are using a lens prescription with strength " << prescriptionStrength << " with " << typeOfCoating << ", which means you can see clearly!" << std::endl;
        }
        else
        {
            std::cout << "Need to focus" << std::endl;
        }
    }
};


struct VRControllers
{
    VRControllers()
    {
        std::cout << "created a VRControllers" << std::endl;
    }

    int numButtons = 4;
    float wristStrapLengthInCm = 12.7f;
    float triggerPress = 0.0f;
    float weightInGrams = 126.1f;
    float lengthInCm = 12.0f;

    void pressButton(std::string button)
    {
        std::cout << "Button pressed: " << button << std::endl;
    }

    bool trackingWorldSpace(std::string appName, bool gameIsRunning = false)
    {
        if (gameIsRunning)
        {
            std::cout << "Tracking world space for " << appName << std::endl;
            return true;
        }
        std::cout << "Cannot track world space when game is not running." << std::endl;
        return false;
    }

    void rumble(float rumbleIntensity)
    {
        std::cout << "Rumbling controllers at intensity level: " << rumbleIntensity << std::endl;
    }
 };


struct VRMemory
{
    VRMemory()
    {
        std::cout << "created a VRMemory" << std::endl;
    }

    double totalMemoryInGb = 6;
    double memoryUsedInGb = 1.432;
    double memoryAvailableInGb = 4.568;
    std::string typeOfMemory = "DDR4";
    std::string brandOfMemory = "Qualcomm";

    bool saveGameProgress(std::string currentCheckpoint, double memoryNeeded)
    {
        if (memoryNeeded > 0 && memoryNeeded < memoryAvailableInGb)
        {
            std::cout << "Saving game at " << currentCheckpoint << std::endl;
            std::cout << "Current memory available is " << memoryAvailableInGb << ". Amount available after saving is " << memoryAvailableInGb - memoryNeeded << std::endl;
            return true;
        }
        std::cout << "Cannot save game progress. Need more memory. Consider upgrading to a newer model of your current brand: " << brandOfMemory << std::endl;
        return false;
    }

    void removeGameData(std::string gameName)
    {
        if (gameName != "")
        {
            std::cout << "Removing " << gameName << " from memory" << std::endl;
        }
    }

    void newGameDownload(double memoryNeeded)
    {
       std::cout << "Taking up " << memoryNeeded << " to download game." << std::endl;
    }
};


struct VRHeadStrap
{
    VRHeadStrap()
    {
        std::cout << "created a VRHeadStrap" << std::endl;
    }

    float circumference = 53.2f;
    float lengthOfTopStrap = 295.5f;
    std::string typeOfMaterial = "Velcro";
    std::string colorOfStrap = "Gray";
    int numVelcroPads = 3;

    void tighten(float amountToTighten)
    {
        if (amountToTighten < 100.f && amountToTighten > 0.f)
        {
            std::cout << "Tightening strap by " << amountToTighten << std::endl;
        }
    }

    void loosten(float amountToLoosten)
    {
        if (amountToLoosten < 100.f && amountToLoosten > 0.f)
        {
            std::cout << "Loostening strap by " << amountToLoosten << std::endl;
        }
    }

    void replaceStrap(std::string brandName)
    {
        if (brandName != "Bad brand name")
        {
            std::cout << "Replacing strap with high quality strap from " << brandName << std::endl;
        }
    }
};


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

    float playGame(std::string gameName, unsigned int numPlayers = 2)
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

    void scanRoom(float roomWidthFeet = 12.4f, float roomHeightFeet = 14.3f)
    {
        std::cout << "Scanning room..." << std::endl;
        std::cout << "Room has a width of " << roomWidthFeet << " and a height of " << roomHeightFeet << std::endl;
    }

    void trackHeadMovement(double acceleration, float xCoord, float yCoord, float zCoord)
    {
        std::cout << "Tracking head movement..." << std::endl;
        std::cout << "Current stats: Acceleration - " << acceleration << "\n" << "x coordinate - " << xCoord << "\n" << "y coordinate - " << yCoord << "\n" << "z coordinate - "  << zCoord << std::endl;
    }
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
    Example::main();

    PlayStationFour newPS4;
    PlayStationFour::Game myFavoriteGame;
    PlayStationFour::Game borrowedGame;
    MacbookPro workLaptop;
    MacbookPro::App timeTrackerApp;
    MacbookPro::App xcode;
    Iphone personalCellPhone;
    Corgi apollo;
    VRHeadset oculusQuest;

    newPS4.playGame(borrowedGame);
    newPS4.watchShow("Lupin");
    newPS4.ejectGameDisc(myFavoriteGame);

    myFavoriteGame.downloadToLocalStorage(49.3);
    myFavoriteGame.autoSave(21.3, 30.2);
    myFavoriteGame.getTimesPlayed(true);
    borrowedGame.downloadToLocalStorage(68.0);
    borrowedGame.autoSave(12.2, 3.3);
    borrowedGame.getTimesPlayed(false);

    workLaptop.turnOnOff(0);
    workLaptop.browseInternet("https://www.programmingformusicians.com/");
    workLaptop.downloadApp(xcode, 456.2);
    std::cout << workLaptop.systemLanguage << std::endl;

    timeTrackerApp.updateToLatestVersion(2.3);
    timeTrackerApp.uninstall(false);
    timeTrackerApp.installPackage(5.3);
    std::cout << "App developer: " << timeTrackerApp.developer << std::endl;
    xcode.updateToLatestVersion(12.5);
    xcode.uninstall(true);
    xcode.installPackage(2398.4);

    personalCellPhone.makeCall("Jacob");
    personalCellPhone.sendText("Hey how are you?");
    personalCellPhone.setTimer(30);

    apollo.bark(398.2f);
    apollo.begForTreats(7, 309.1f);
    apollo.playCatch(5);

    oculusQuest.playGame("Beat Saber", 1);
    oculusQuest.scanRoom(10.2f, 9.3f);
    oculusQuest.trackHeadMovement(20, 12.0f, 34.2f, 49.5f);
    
    oculusQuest.camera.scanRoom(true);
    oculusQuest.camera.detectObstacles(false);
    oculusQuest.camera.togglePasshroughView(false);
    std::cout << "VR camera has " << oculusQuest.camera.megapixels << " megapixels." << std::endl;
    
    oculusQuest.lenses.viewGame("The Climb");
    oculusQuest.lenses.adjustLensDistance(49.0f, 4.2f);
    oculusQuest.lenses.focusOnScreen(false);
    
    oculusQuest.controllers.pressButton("A");
    oculusQuest.controllers.trackingWorldSpace("Rec Room", true);
    oculusQuest.controllers.rumble(34.5f);
    std::cout << (oculusQuest.controllers.weightInGrams > 300 ? "The controllers are heavy" : "The controllers aren't heavy") << std::endl;
    
    oculusQuest.memory.saveGameProgress("Checkpoint A", 23.4);
    oculusQuest.memory.removeGameData("Rec Room");
    oculusQuest.memory.newGameDownload(54.3);
    
    oculusQuest.strap.tighten(8.3f);
    oculusQuest.strap.loosten(2.7f);
    oculusQuest.strap.replaceStrap("Official Oculus Headstrap");

    std::cout << "good to go!" << std::endl;
}
