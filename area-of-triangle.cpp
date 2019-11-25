// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: RJ Fromm
// Created on: Oct 2019
// This program uses user defined functions

#include <iostream>
#include <cstdlib>
#include <string>

void CalculateArea(int base, int height) {
    // calculate area
    int area;

    // process
    area = (base * height)/2;

    // output
    std::cout << "The area is " << area << "cm^2" << std::endl;
}

main() {
    // this function gets length and width
    std::string baseFromUser;
    std::string heightFromUser;
    float baseFromUserInt;
    float heightFromUserInt;

    // input
    std::cout << "Enter the base of a triangle (cm): ";
    std::cin >> baseFromUser;
    std::cout << "Enter the width of a triangle (cm): ";
    std::cin >> heightFromUser;
    std::cout << std::endl;
    try {
        baseFromUserInt = std::stoi(baseFromUser);
        heightFromUserInt = std::stoi(heightFromUser);

        // call functions
        CalculateArea(baseFromUserInt, heightFromUserInt);
    } catch(...) {
        std::cout << "invalid number" << std::endl;
    }
}
