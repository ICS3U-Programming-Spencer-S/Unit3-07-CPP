// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 18, 2022
// A dating game program for a Grandparent
// That will decide if you are the right age
// To date their grandchildren.

#include <iostream>
#include <string>


int main() {
    // initializing variables
    int userInputAge;
    std::string UserInputAgeAsString;

    // Requesting user age and creating it into a string
    std::cout << "\n";
    std::cout << "This is a dating program for my Grandchildren\n";
    std::cout << "Please enter your age: (1-100): ";
    std::cin >> UserInputAgeAsString;
    std::cout << "\n"
              << std ::endl;

    // Try catch statement
    try {
        userInputAge = std::stoi(UserInputAgeAsString);

        if (userInputAge <= 40 && userInputAge >= 25) {
            std::cout << "Congrats,\n";
            std::cout << "you are the right age to date my grandchildren! \n";
        } else {
            std::cout <<
            "Sorry, you are not the right age to date my grandchildren\n ";
        }
    // Similar to an else statement...
    } catch (std::invalid_argument) {
        std::cout << UserInputAgeAsString <<
        " is not a valid number\n";
        std::cout << "Please ONLY enter a NUMBER from 1-100\n";
    } std::cout << "Thank's for trying this program and my grandchildren!\n";
}

