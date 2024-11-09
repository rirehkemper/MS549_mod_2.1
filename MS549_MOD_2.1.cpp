// MS549_MOD_2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Allen Rehkemper MS549 Mod 2.1 11/08/2024
I spent a total of roughly 2.5 hours on this project. I had anticipated 2 hours. The biggest issue I came across was
* deciding how best to handle the countdowns. In my first coding attempt I was accidentally referencing the original variables
* for the rest and active times; this resulted in the variables remaining at 0 and not resetting at the end of each round.
* to resolve this, I created temporary variables that count down, upon completion of the countdown variable I reference
* the tabata method to then drop the activeTime and restTime variables by 1. 


*/
#include <iostream>
#include "functions.h"


    int main()
    {
        //variables are defined
        int restTime = 5;
        int activeTime = 5;
        int rounds = 2;

        //tabata method is defined
        tabata(&activeTime, &restTime, &rounds);

        return 0;
    }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
