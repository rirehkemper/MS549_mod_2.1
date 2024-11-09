// functions.cpp
//libraries
#include <iostream>
#include <thread>
#include <chrono>
#include "functions.h"

// This is  the recursive countdown function for the workout. Note that it is pointing to the time variable
void countdown(int* time) {
    if (*time > 0) {
        std::cout << *time << " seconds remaining...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        //this is the actual recursive moment of the method
        (*time)--;
        countdown(time); 
    }
}

// This is the recusive countdown for the tabata function, points to the active time, resttime, and rounds that are
// set in the main() method.
void tabata(int* activeTime, int* restTime, int* rounds) {
    if (*rounds > 0) {
        /*temporary variables to hold the pointers.These will act as the coundown so that the original time count is
        unaffected */
        int tempActiveTime = *activeTime;
        int tempRestTime = *restTime;

        std::cout << "\nStarting active interval for " << tempActiveTime << " \n";
        countdown(&tempActiveTime);

        std::cout << "Resting for " << tempRestTime << " \n";
        countdown(&tempRestTime);

        (*rounds)--; // Decrease round count
        std::cout << "\nRounds remaining: " << *rounds << "\n";

        int resetActiveTime = *activeTime, resetRestTime = *restTime;
        tabata(activeTime, restTime, rounds); // Recursive call for the next round
    }
    else {
        std::cout << "Tabata session complete!\n";
    }
}