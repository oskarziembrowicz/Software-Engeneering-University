#include <iostream>
#include "Bernouli.h"

using namespace std;

bool isTheDataCorrect(float p, int n, int k) {
    return p <= 1 && p >= 0 && n >= 0 && k >= 0 && k <= n;
}

int main()
{
    float singleProbability;
    int numberOfAttempts, numberOfSuccesses;

    cout << "Enter the probability of a single success: ";
    cin >> singleProbability;
    cout << "Enter the number of attempts: ";
    cin >> numberOfAttempts;
    cout << "Enter the number of successes: ";
    cin >> numberOfSuccesses;
    if(isTheDataCorrect(singleProbability, numberOfAttempts, numberOfSuccesses)){
        Bernouli* calculator = new Bernouli();
        cout << "Probability of " << numberOfSuccesses << " successes in " << numberOfAttempts
        << " attempts is: " << calculator->bernouli(singleProbability,numberOfAttempts, numberOfSuccesses) << "\n";
        delete calculator;
    } else {
        cout << "Error: Incorrect data\n";
    }
    return 0;
}
