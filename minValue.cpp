// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Dec. 16, 2022
// This program generates 10
// random numbers from 1 to
// 100 and calculates the
// smallest number

#include <time.h>

#include <random>
#include <array>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

// MinValue function
int MinValue(randomNumList) {
    // Initializing variables
    int minNum = 100;
    int currentNum;
    for (int aSingleNumber : randomNumList) {
        // Initializing currentNum
        currentNum = randomNumList[counter];
        // Reassigning minNum
        if (minNum > currentNum) {
            minNum = currentNum;
        }
    }
    return minNum;
}

int main() {
    // Introductory paragraph
    std::cout << "This program generates 10\n";
    std::cout << "random numbers from 1 to\n";
    std::cout << "100 and calculates the\n";
    std::cout << "smallest number";
    std::cout << "\n";

    // Initializing variables
    // counter
    int counter = 0;
    // randomNumList
    std::array<int, 10> randomNumList;

    for (int counter = 1; counter <= 8; counter = counter + 1) {
        // random number code
        // initializing random seed
        std::random_device rseed;

        std::mt19937 rgen(rseed());

        // initializing random number range
        std::uniform_int_distribution<int> idist(0, 100);

        // making random number variable
        // randomNumber = (rand() % RANGE + 1) + 0;
        // initializing randomNum
        int randomNum = idist(rgen);

        // adding randomNum to the array
        randomNumList[counter] = randomNum;

        // displaying generated number
        std::cout << randomNum << " has been generated.";

        counter = counter + 1;
    }

    // Calling MinValue()
    int trueMin = MinValue(randomNumList);

    // MinValue(randomNumList)

    // Printing final message
    std::cout << "The lowest number is ";
    std::cout << trueMin;
    std::cout << ".";
}
