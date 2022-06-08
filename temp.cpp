// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses user defined functions

#include <iostream>
#include <string>

void fahrenheit() {
    // this function calculates the fahrenheit from celsius

    std::string celsiusString;
    float celsiusFloat;
    float fahrenheitFloat;

    // input
    std::cout << "Enter the temperature(C): ";
    std::cin >> celsiusString;

    // process & output
    try {
        celsiusFloat = std::stof(celsiusString);
        fahrenheitFloat = (celsiusFloat * 1.8) + 32;
        std::cout << "" << std::endl;
        std::cout << "The temprature is: "
        << fahrenheitFloat << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}

main() {
    // this function just calls other functions

    // call functions
    fahrenheit();
}
