// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program identifies an integer

#include <iostream>

int main() {
    // this function identifies an integer
    int userInt;

    // input
    std::cout << "This program identifies an integer." << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> userInt;

    // process
    if (userInt > 0) {
        // output
        std::cout << userInt << " is a positive integer.";
    } else if (userInt < 0) {
        // output
        std::cout << userInt << " is a negative integer.";
    } else {
        // output
        std::cout << userInt << " is zero.";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
