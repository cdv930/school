/*
 Christian Vernoy
 CS540
 Section #13434
                                        Lab Assignment #1
 */


#include <iostream>
using namespace std;

class fraction
{
public:
    //function to assign input values to fraction numerator and denominator
    //postcondition: valid values input will result in private variables being defined
    void setFraction(int,int);
    //function to print fractions accessor function so made constant.
    void printFraction() const;
    //function to reset fraction values to default values after loop block executes;
    void clearFraction();
    //constructor to initialize num and denom values to 0 and 1, respectively.
    fraction();
private:
    //integers to hold numerator and denominator; private to avoid direct user manipulation;
    int num;
    int denom;
};

int main()
{
    fraction userFraction;
    int numerator;
    int denominator;
    char runAgain;
    bool run = true;
    
    
    cout << "Welcome to the program to simplify fractions. Please enter only positive integers for both the numerator and denominator.\n \n";
    // Do while loop to run program until user enters correct character to end the program.
    // cin clear function/ignore function used to clear input stream after data input.
    do
    {
    cout << "Please enter your numerator: ";
    cin>> numerator;
        cin.clear();
        cin.ignore(200,'\n');
    
    cout << "\n" << "Please enter your denominator: ";
    cin >> denominator;
        cin.clear();
        cin.ignore(200,'\n');
    
    userFraction.setFraction(numerator,denominator);
    cout << "\nYour simplified fraction is: ";
    
    userFraction.printFraction();
    
    cout << "\nWould like to simplify another fraction?\n"
        << "Press any key followed by the enter key to continue, otherwise press q and then enter to quit.";
    cin >> runAgain;
        if(runAgain == 'q' || runAgain == 'Q')
            run = false;
        cin.clear();
        cin.ignore(200,'\n');
        userFraction.clearFraction();
        cout<< "\n";
    }
    
    while (run == true);
    return 0;
}



//member function definitions
void fraction :: setFraction(int numerator, int denominator)
{
   
    if (((denominator > 0) && (numerator > 0)))
        {denom = denominator;
            num = numerator;}
    else {num = 0;
        denom=1;}
}

void fraction:: printFraction() const
{
    cout << (num/denom) << " " << (num%denom) << "/" << denom << "\n";
}

fraction::fraction()
{num = 0;
    denom=1;
}
void fraction:: clearFraction()
{ num = 0;
    denom = 1;
}


/*TEST DATA: 5
 Test 1: Small numerator over larger denominator;
 Test 2: Large numerator over smaller denominator;
 Test 3: Invalid input over valid input;
 Test 4: Valid input over invalid input;
 Test 5: Invalid input over valid;

 IDE Output Starts below;
 
Welcome to the program to simplify fractions. Please enter only positive integers for both the numerator and denominator.

Please enter your numerator: 1

Please enter your denominator: 100

Your simplified fraction is: 0 1/100

Would like to simplify another fraction?
Press any key followed by the enter key to continue, otherwise press q and then enter to quit.yes

Please enter your numerator: 20

Please enter your denominator: 4

Your simplified fraction is: 5 0/4

Would like to simplify another fraction?
Press any key followed by the enter key to continue, otherwise press q and then enter to quit.sure

Please enter your numerator: 100

Please enter your denominator: $

Your simplified fraction is: 0 0/1

Would like to simplify another fraction?
Press any key followed by the enter key to continue, otherwise press q and then enter to quit. ok

Please enter your numerator: cs540

Please enter your denominator: 10

Your simplified fraction is: 0 0/1

Would like to simplify another fraction?
Press any key followed by the enter key to continue, otherwise press q and then enter to quit.+

Please enter your numerator: z

Please enter your denominator: L

Your simplified fraction is: 0 0/1

Would like to simplify another fraction?
Press any key followed by the enter key to continue, otherwise press q and then enter to quit. q

Program ended with exit code: 0
*/

