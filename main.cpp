#include <fstream> // work with txt files
#include <iomanip> // skaiciu apvalinimas
#include <iostream> // keyboard and screen
#include <cmath> // math funcitions, e.g. sqr root, etc.

#include <cctype>

using namespace std;

int generator ()
{
    int passwdLength = 0;

    while (true)        // for asking for an input you require indefinitely
    {
        cout << "\n\nPlease type the desired length of your generated password:\n";
        cin >> passwdLength;
                                            // if != number:
        if (cin.fail())                         // jam clearance:
        {
            cin.clear();                            // clear the fail state
            cin.ignore(1000, '\n');                 // discard the invalid input
            cout << "\n\nInvalid input. Please enter a number.\n";
            continue;                               // go back to the top of the loop
        }

        //cout << passwdLength;
                                            // if number is <= 0
        if (passwdLength <= 0)
        {
            cout << "\n\nPlease enter a number greater than 0.\n";
            continue;
        }

        // if input is valid, break the loop
        break;
    }
    return 0;
}

int main ()
{
    string yesOrNo;

    cout << "\n\nWelcome to my password generator!";

    while (true)        // for asking for an input you require indefinitely
    {
        cout << "\n\nWould you like to start generating passwords? (Y/n)\n";
        //cin >> yesOrNo;
        getline(cin, yesOrNo);                      // doesnt wait for input and takes the entire line after Enter (better option for this case instead of cin >> yesOrNo)

        //if (yesOrNo == NULL || yesOrNo == "")     // in c++ you cant do this
        if (yesOrNo.empty())                        // if input == null, then the program automatically assumes the input is "Y" because of (Y/n)
        {
            generator();
            break;
        }
        else if (tolower(yesOrNo[0]) == 'y')        // lowers caps, takes the first char of input and compares it to required result for the action
        {
            generator();
            break;
        }
        else if (tolower(yesOrNo[0]) == 'n')        // if input == n, then program terminates itself
        {
            cout << "\n\nHave a nice day!\n";
            exit(0);
        }
    }
    return 0;
}

