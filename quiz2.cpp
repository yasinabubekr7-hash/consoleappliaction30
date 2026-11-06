#include <iostream>
using namespace std;

void getNumbers(int arr[], int size);
int countPositive(int arr[], int size);
int countNegative(int arr[], int size);
int countZero(int arr[], int size);
int sumPositive(int arr[], int size);
int sumNegative(int arr[], int size);
double calculateAverage(int arr[], int size);
void display(int posCount, int negCount, int zeroCount, int posSum, int negSum, double avg);

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

 cout << "enter 5 numbers " << endl;
for (int i = 0;i < 5;i++)
{
	cin >> numbers[i];
}
    int posCount = countPositive(numbers, SIZE);
    int negCount = countNegative(numbers, SIZE);
    int zeroCount = countZero(numbers, SIZE);

    int posSum = sumPositive(numbers, SIZE);
    int negSum = sumNegative(numbers, SIZE);

    double avg = calculateAverage(numbers, SIZE);

   
    display(posCount, negCount, zeroCount, posSum, negSum, avg);

    return 0;
}




void getNumbers(int arr[], int size) {
    cout << "Please enter " << size << " integer numbers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }
}


int countPositive(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}


int countNegative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}


int countZero(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}


int sumPositive(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}


int sumNegative(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}


double calculateAverage(int arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total / size;
}


void display(int posCount, int negCount, int zeroCount, int posSum, int negSum, double avg) {
    cout << "Positive numbers count : " << posCount << endl;
    cout << "Negative numbers count : " << negCount << endl;
    cout << "Zero values count      : " << zeroCount << endl;
    cout << "Sum of positives       : " << posSum << endl;
    cout << "Sum of negatives       : " << negSum << endl;
    cout << "Average of all numbers : " << avg << endl;
}
