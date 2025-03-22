// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: March 21st, 2025
// This program asks the user to guess a number
// between 0 and 9

#include <iostream>
#include <cstdlib>

int main() {
    // generate a random number between 0 and 9
    int randomNumber;
    int user_number;

    // declare integer to hold random number
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> user_number;

    // initialize random seed
    srand((unsigned)time(NULL));

    // declare a random number for the program
    randomNumber = std::rand() % 9 + 0;

    // if decision, user_number == randomNumber
    // say you guessed correctly.
    if (user_number == randomNumber) {
        std::cout << "You guessed correctly!" << std::endl;
        std::cout << "" << std::endl;
} else {
        // else statement, if the conditions are't met.
        // user_number != randomNumber, say you guessed
        // wrong
            if (user_number != randomNumber) {
                std::cout << "You guessed wrong" << std::endl;
                std::cout << "The correct number is " << int(randomNumber);
            }
            }
}
