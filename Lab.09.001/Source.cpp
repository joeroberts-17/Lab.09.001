/*
* File:lab 9
* Author: joe roberts
* Date: 4/4/2024
*
* Description: arrays
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Initialize an array to store 10 4-digit random integers
    int randomIntegers[10];
    cout << "10 random 4 digit numbers: ";
    // Fill the array with random 4-digit integers
    for (int i = 0; i < 10; ++i) {
        randomIntegers[i] = rand() % 9000 + 1000; // Generate a random integer between 1000 and 9999
    }

    // Print every element in order of appearance in the array
    for (int i = 0; i < 10; ++i) {
        cout << randomIntegers[i] << " ";
    }

    return 0;