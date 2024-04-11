#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // For std::sort
using namespace std;

// Initialize arrays to store even and odd numbers
int evenNumbers[10], oddNumbers[10];
int evenCount = 0, oddCount = 0;

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

    // Sort even and odd arrays
    sort(evenNumbers, evenNumbers + evenCount);
    sort(oddNumbers, oddNumbers + oddCount);
    cout << "Even numbers first: "; 
    // Merge the two arrays
    for (int i = 0; i < evenCount; ++i) {
        cout << evenNumbers[i] << " ";
    }
    for (int i = 0; i < oddCount; ++i) {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
