#include <fstream> // work with txt files
#include <iomanip> // skaiciu apvalinimas
#include <iostream> // keyboard and screen
#include <cmath> // math funcitions, e.g. sqr root, etc.

#include <cctype>

using namespace std;

int generator ()
{
    cout << "\n\nWelcome to the generator\n\n";



    return 0;
}

int main ()
{

    string yesOrNo;

    cout << "\n\nWelcome to my password generator!\n";
    cout << "Would you like to start generating passwords? (Y/n)\n\n";

    //cin >> yesOrNo;
    getline(cin, yesOrNo);  // doesnt wait for input and takes the entire line


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
