#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 float
 bool
 double  
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int numberOfDaysLeft = -365;
    int cashAmount = 5;
    int trackCount = 162;
    float myHeightInCm = 173.2f;
    float sampleRate = 44.1f;
    float timeRemainingInMinutes = 22.3f;
    bool didIPassMyExam = false;
    bool didYouWinTheLottery = true;
    bool didHeDriveHere = true;
    double myWeightInKG = 66.75;
    double priceOfCarInDollars = 230978.65;
    double distanceLeftInKm = 2.41;
    unsigned int numberOfSpeakers = 11;
    unsigned int numberOfCompressors = 25;
    unsigned int threadCount = 255;
    char grade = 'a';
    char mostPopularLetter = 'e';
    char myCountry = 's';
    

    
    ignoreUnused(number, numberOfDaysLeft, cashAmount, trackCount, myHeightInCm, sampleRate, timeRemainingInMinutes, didIPassMyExam, didYouWinTheLottery, didHeDriveHere, myWeightInKG, priceOfCarInDollars, distanceLeftInKm, numberOfSpeakers, numberOfCompressors, threadCount, grade, mostPopularLetter, myCountry); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int showSoundPressureLevel(int weightingA = 75, int weightingC = 84)
{
    ignoreUnused(weightingA, weightingC);
    return {};
} 

/*
 2)
 */
int calculateMyCurrentMonies(int cash = 100, int bank = 22, int onLoan = 55000)
{
    ignoreUnused(cash, bank, onLoan);
    return {};
}

/*
 3)
 */
bool buyAnIphone(int price = 1000, bool blueColour = true)
{
    ignoreUnused(price, blueColour);
    return {};
}

/*
 4)
 */
float ComparePricesOfLaptop(float a, float b, float c, float d, float e)
{
    ignoreUnused(a, b, c, d, e);
    return {};
}

/*
 5)
 */
void displayOutputLevel(int master = -1)
{
    ignoreUnused(master);
}

/*
 6)
 */
bool shouldICutHair(bool hairLong = true, int price = 10, int distanceAwayInMetres = 100)
{
    ignoreUnused(hairLong, price, distanceAwayInMetres);
    return {};
}

/*
 7)
 */
float selectASampleRateForYourProject(float a = 44.1f, float b = 48.f, float c = 88.2f, float d = 96.f)
{
    ignoreUnused(a, b, c, d);
    return {};
}

/*
 8)
 */
bool goForAWalk(double temperatureInCelsius = 20.2, bool isItRaining = false)
{
    ignoreUnused(temperatureInCelsius, isItRaining);
    return {};
}

/*
 9)
 */
float calculateAmountOfLiquidYield(int numberOfApples = 50, double volumeOfWater = 1.5)
{
    ignoreUnused (numberOfApples, volumeOfWater);
    return {};
}

/*
 10)
 */
int makeSuperSmoothie(float numberOfPineappleSlices = 0.5, int boxesOfStrawberries = 10, int orangeJuiceInLitres = 1, int numberOfBanana = 2, int boxesOfBlueberries = 1, int teaspoonOfHoney = 3)
{
    ignoreUnused(numberOfPineappleSlices, boxesOfStrawberries, orangeJuiceInLitres, numberOfBanana, boxesOfBlueberries, teaspoonOfHoney);
    return {};
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

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    int venueLoudnessMeasurement = showSoundPressureLevel(75, 84);
    
    //2)
    int assets = calculateMyCurrentMonies(100, 22, 55000);
    
    //3)
    auto newPhonePrice = buyAnIphone(2000, false);
    
    //4)
    float costOfTowel = ComparePricesOfLaptop(23.f, 22.5f, 19.56f, 29.22f, 33.f);
    
    //5)
    displayOutputLevel(-1);
    
    //6)
    bool goToBarber = shouldICutHair(false, 22, 500);
    
    //7)
    float startUpDAW = selectASampleRateForYourProject(44.1f, 48.f, 88.2f, 96.f);
    
    //8)
    bool stayHome = goForAWalk(30.3, true);
    
    //9)
    float appleJuice = calculateAmountOfLiquidYield(3, 0.5);
    
    //10)
    int totalIngredients = makeSuperSmoothie(3, 4, 2, 6, 1, 1);
    
    
    ignoreUnused(carRented, venueLoudnessMeasurement, assets, newPhonePrice, costOfTowel, goToBarber, startUpDAW, stayHome, appleJuice, totalIngredients);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
