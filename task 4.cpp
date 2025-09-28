#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "How many scores? ";
    cin >> n;

    // Check for valid input
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    int* scores = new int[n];
    cout << "Enter " << n << " Scores: " << endl;

    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += scores[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / n;
    cout << "Average = " << average << endl;

    // Clean up memory
    delete[] scores;
    scores = nullptr;

    return 0;
}

