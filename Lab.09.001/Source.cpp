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
#include <algorithm> /
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> 
using namespace std;

// Initialize arrays to store even and odd numbers
int evenNumbers[10], oddNumbers[10];
int evenCount = 0, oddCount = 0;

// Function to reverse the order of an array
void reverseNumbers(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Function to print the first and last numbers from the first 10 numbers generated
void printFirstAndLastFirstTen(int arr[]) {
    cout << "First and last numbers: " << arr[9] <<" " << arr[0] << endl;
   
}

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
        if (randomIntegers[i] % 2 == 0) {
            evenNumbers[evenCount++] = randomIntegers[i];
        }
        else {
            oddNumbers[oddCount++] = randomIntegers[i];
        }
    }
    cout << endl;
    // Print every even-indexed element in the array
    cout << "Even-indexed numbers: ";
    for (int i = 0; i < 10; i += 2) {
        cout << randomIntegers[i] << " ";
    }
    cout << endl;

    // Extract even numbers from even-indexed positions
    cout << "Even numbers from even indexes: ";
    for (int i = 0; i < 10; i += 2) {
        if (randomIntegers[i] % 2 == 0) {
            cout << randomIntegers[i] << " ";
        }
    }
    cout << endl;

    // Reverse the order of the random numbers
    cout << "Reversed order of random numbers: ";
    reverseNumbers(randomIntegers, 10);
    for (int i = 0; i < 10; ++i) {
        cout << randomIntegers[i] << " ";
    }
    cout << endl;

    // Print the first and last numbers from the first 10 generated numbers
    printFirstAndLastFirstTen(randomIntegers);

    return 0;
}


