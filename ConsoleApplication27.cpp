#include <iostream>
using namespace std;

// Function Prototypes
void getNumbers(int arr[], int size);
int countPositive(int arr[], int size);
int countNegative(int arr[], int size);
int countZero(int arr[], int size);
int sumPositive(int arr[], int size);
int sumNegative(int arr[], int size);
double calculateAverage(int arr[], int size);
void displayResults(int posCount, int negCount, int zeroCount, int posSum, int negSum, double avg);

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // 1. Accept 5 numbers using an array
    getNumbers(numbers, SIZE);

    // 2. Process data using separate functions
    int posCount = countPositive(numbers, SIZE);
    int negCount = countNegative(numbers, SIZE);
    int zeroCount = countZero(numbers, SIZE);

    int posSum = sumPositive(numbers, SIZE);
    int negSum = sumNegative(numbers, SIZE);

    double avg = calculateAverage(numbers, SIZE);

    // 3. Display results using a void function
    displayResults(posCount, negCount, zeroCount, posSum, negSum, avg);

    return 0;
}

// --- Function Definitions ---

// Function to take input from the user
void getNumbers(int arr[], int size) {
    cout << "Please enter " << size << " integer numbers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

// Count positive numbers
int countPositive(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

// Count negative numbers
int countNegative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

// Count zero values
int countZero(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}

// Calculate sum of positive numbers
int sumPositive(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Calculate sum of negative numbers
int sumNegative(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Find the average of all numbers
double calculateAverage(int arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total / size;
}

// Void function to display all results
void displayResults(int posCount, int negCount, int zeroCount, int posSum, int negSum, double avg) {
    cout << "\n==============================\n";
    cout << "       RESULTS SUMMARY        \n";
    cout << "==============================\n";
    cout << "Positive numbers count : " << posCount << endl;
    cout << "Negative numbers count : " << negCount << endl;
    cout << "Zero values count      : " << zeroCount << endl;
    cout << "Sum of positives       : " << posSum << endl;
    cout << "Sum of negatives       : " << negSum << endl;
    cout << "Average of all numbers : " << avg << endl;
    cout << "==============================\n";
}