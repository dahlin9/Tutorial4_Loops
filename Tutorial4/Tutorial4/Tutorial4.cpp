// Tutorial4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int countdownInput;
    cout << "Type what to count down from: ";
    cin >> countdownInput;

    // Checks if the input was valid, and keeps the user in the loop until it is
    while (countdownInput <= 0) {
        cout << "Invalid Number, try again!" << endl;
        cout << "Type what to count down from: ";
        cin >> countdownInput;
    }

    for (int i = countdownInput; i > 0; i--) {
        cout << "T-" << i << endl;
    }

    cout << "Blast Off!";


    //if (countdownInput < 1) {
    //    cout << "Invalid number, try again!";
    //} else (countdownInput > 0); {
    //    //Show the number
    //    cout << "T-" << countdownInput << endl;
    //    //Decrease the number by 1
    //    countdownInput--;
    //    //This is outside the loop
    //    cout << "Blast off!" << endl;
    //}
}