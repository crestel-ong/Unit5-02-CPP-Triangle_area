// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: Oct 2021
// This Triangle Area program
// This program uses defined functions

#include <iostream>
#include <string>

void CalculateAreaOfTriangle(float base, float height) {
    // calculate the area of a triangle
    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area of the triangle is " << area << " cm²." << std::endl;
}

main() {
    // this function gets the base and the height
    std::string base;
    std::string height;
    float baseFromUser;
    float heightFromUser;

    // input
    std::cout << "Enter the base length of a triangle (cm): ";
    std::cin >> base;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> height;
    std::cout << std::endl;

    try {
        // convert string to integer
        baseFromUser = std::stof(base);
        heightFromUser = std::stof(height);
        // call functions
        CalculateAreaOfTriangle(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input." << std::endl;
    }
    std::cout << "\nDone.";
}
