/*
 * Author: Aidan Kiser
 * UserID: ark0053
 * Filename: simple.cpp
 * Compile: g++ simple.cpp -o hash_table_simple.cpp
 * Run: ./hash_table_simple.cpp
 * Version: 31 January 2024
 * Resources: Given factorial.cpp & standard.cpp files, online resources for sytax.
 */

#include <iostream>
#include <cmath>
using namespace std;

// Calculates the standard deviation based on the inputed array.
float calculateSD(float data[], int n) {
    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i = 0; i < n; ++i)
    {
        sum += data[i];
    }

    mean = sum / n;

    for(i = 0; i < n; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / n);
}

// Calculates the factorial of the size of the array.
int factorial(int n) {
    int i, factorial = 1;

    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int n, numOfPositives = 0;
    float data[10];

    cout << "How many numbers do you want to input (must be less than 10)? ";
    cin >> n;

    if (n <= 0 || n > 10) {
        cout << "Invalid number of elements. Please enter a number between 1 and 10." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        
        if (data[i] > 0) {
            numOfPositives++; // count positives
        }
    }

    cout << endl << "Standard Deviation = " << calculateSD(data, n) << endl;
    
    int factValue = factorial(numOfPositives);
    cout<< "Factorial of number of positive values (" << numOfPositives << ") = "<< factValue << endl;

    return 0;
}


