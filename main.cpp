
#include <iostream>
using namespace std;

class fraction
{
public:
    void setFraction(int& , int&);
    void printFraction() const;
private:
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
    
    
    cout << "Welcome to the program to simplify fractions. Please enter only positive integers for both the numerator and denominator.\n";
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
    cout << "Your simplified fraction is: ";
    
    userFraction.printFraction();
    
    cout << "Would like to simplify another fraction?\n"
        << "Press any key followed by the enter key to continue, otherwise press q and then enter to quit.";
    cin >> runAgain;
        if(runAgain == 'q' || runAgain == 'Q')
            run = false;
        cin.clear();
        cin.ignore(200,'\n');
    }
    
    while (run == true);
}

void fraction :: setFraction(int& numerator, int& denominator)
{
    if (numerator >= 0 && denominator >0)
    { num = numerator;
    denom = denominator;}
    else
    {num = 0;
    denom = 1;}
    
}

void fraction:: printFraction() const
{
    cout << (num/denom) << " " << (num%denom) << "/" << denom << "\n";
}
