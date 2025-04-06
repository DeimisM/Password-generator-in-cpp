#include <fstream> // work with txt files
#include <iomanip> // skaiciu apvalinimas
#include <iostream> // keyboard and screen
#include <cmath> // math funcitions, e.g. sqr root, etc.

#include <cctype>

using namespace std;

int generator ()
{
    int passwdLength = 0;

    cout << "\n\nWelcome to the generator\n";

    while (true)
    {
        cout << "\n\nPlease type the desired length of your generated password:\n\n";
        cin >> passwdLength;

        if (cin.fail())
        {
            cin.clear();                            // clear the fail state
            cin.ignore(1000, '\n');                 // discard the invalid input
            cout << "\nInvalid input. Please enter a number.\n";
            continue;                               // go back to the top of the loop
        }

        cout << passwdLength;

        if (passwdLength <= 0)
        {
            cout << "\nPlease enter a number greater than 0\n";
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

    cout << "\n\nWelcome to my password generator!\n";
    cout << "Would you like to start generating passwords? (Y/n)\n\n";

    //cin >> yesOrNo;
    getline(cin, yesOrNo);  // doesnt wait for input and takes the entire line after Enter


                                                    // if input == y, then passwd generator is started
    if (!yesOrNo.empty() && tolower(yesOrNo[0]) == 'y')
    {
        generator();
    }
                                                    // if input == null, then the program automatically assumes the input is "Y"
    else if (yesOrNo == "")
    {
        generator();
    }
                                                    // if input == n, then program terminates itself
    else if (!yesOrNo.empty() && tolower(yesOrNo[0]) == 'n')
    {
        cout << "\n\nExiting the program.\n\n";
        exit(0);
    }
    else
    {

        cout << "\n\nYou have failed to enter the program. Shutting down.\n\n";
        exit(0);
    }

    return 0;
}
