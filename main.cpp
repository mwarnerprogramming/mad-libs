/**
 * @file main.cpp
 * @author Michael Warner (michaelwarnerprogramming@gmail.com)
 * @brief simple mad libs generator.
 * @version 0.2
 * @date 2022-07-25
 * 
 */
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

void madLib1() {
    string prompt[9], userWord[9];
    int length = sizeof(prompt) / sizeof(string);

    prompt[0] = "Enter an animal (1/9): ";
    prompt[1] = "Enter a country (2/9): ";
    prompt[2] = "Enter a plural noun (3/9): ";
    prompt[3] = "Enter a type of food (4/9): ";
    prompt[4] = "Enter a type of screened device (5/9): ";
    prompt[5] = "Enter a noun (6/9): ";
    prompt[6] = "Enter a verb (7/9): ";
    prompt[7] = "Enter a verb (8/9): ";
    prompt[8] = "Enter an adjective (9/9): ";

    for (int i = 0; i < length; i++) {
        cout << prompt[i];
        cin >> userWord[i];
    }

    cout << "The majestic " << userWord[0] << " has roamed the forests of " << userWord[1]                                  <<  endl;
    cout << "for thousands of years. Today, she wanders in search of " << userWord[2] << ". She"                            <<  endl;
    cout << "must find food to survive. While hunting for " << userWord[3] << ", she found a/an"                            <<  endl;
    cout << userWord[4] << " hidden behind a " << userWord[5] << ". She has never seen anything like this before."          <<  endl;
    cout << "What will she do? With the device in her teeth, she tries to " << userWord[6] << ", but nothing happens."      <<  endl;
    cout << "She takes it back to her family. When her family sees it, they quickly " << userWord[7] << "."                 <<  endl;
    cout << "Soon, the device becomes " << userWord[8] << ", and the family decides to put it back where they found it."    <<  endl;
}

void madLib2(){
    
    string prompt[18], userWord[18];
    int length = sizeof(prompt) / sizeof(string);

    prompt[0]  = "Enter a name (1/18): ";
    prompt[1]  = "Enter a transformation (2/18): ";
    prompt[2]  = "Enter a noun (3/18): ";
    prompt[3]  = "Enter an adjective (4/18): ";
    prompt[4]  = "Enter a noun (5/18): ";
    prompt[5]  = "Enter a name (6/18): ";
    prompt[6]  = "Enter a verb (7/18): ";
    prompt[7]  = "Enter a noun (8/18): ";
    prompt[8]  = "Enter a noun (9/18): ";
    prompt[9]  = "Enter a name (10/18): ";
    prompt[10] = "Enter a name (11/18): ";
    prompt[11] = "Enter a verb (12/18): ";
    prompt[12] = "Enter a name (13/18): ";
    prompt[13] = "Enter a name (14/18): ";
    prompt[14] = "Enter a name (15/18): ";
    prompt[15] = "Enter a name (16/18): ";
    prompt[16] = "Enter a name (17/18): ";
    prompt[17] = "Enter a TV show (18/18)";

     for (int i = 0; i < length; i++) {
        cout << prompt[i];
        cin >> userWord[i];
    }

    cout << "If " << userWord[0] << "turns " << userWord[1] << ", " << userWord[2] << " doesn't find the darn " << userWord[3] << 
         " " << userWord[4] << ", " << userWord[5] << " " << userWord[6] << endl;
    cout << "because of " << userWord[7] << ", the " << userWord[8] << " Tournament isn't won by " << userWord[9] << ", the" << endl; 
    cout << "bastard " << userWord[10] << " doesn't " << userWord[11] << " and the rivalry between " << userWord[12] << " and " << userWord[13] << ", " << endl; 
    cout << "as well as the love triangle between " << userWord[14] << ", " << userWord[15] << " & " << userWord[16] << ", isn't" << endl;
    cout << "resolved, I am done, you hear me? DONE, with" << userWord[17];
}

void menu() {
    char choice;
    bool execute = true;

    while (execute) {
        cout << "\n\n";
        cout << "Choose a story:" << endl;
        cout << "1. Nature Show" << endl;
        cout << "2. Done with this show" << endl;


        cout << "Make a selection or press q to quit: ";
        cin >> choice;

            switch (choice) {
                case '1':
                    madLib1();
                    break;
                case '2':
                    madLib2();
                    break;
                case 'q':
                    cout << "Now exiting.";
                    execute = false;
                    break;
                default:break;
            }
    }
}


int main() {

    menu();

    return 0;
}