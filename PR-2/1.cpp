#include <iostream>
using namespace std;

int main() {
    // Variables to store train details
    int trainNumber[3];
    string trainName[3], source[3], destination[3], trainTime[3];

    // Collecting train details from the user
    for (int i = 0; i < 3; i++) {
        cout << "Enter Train Number: ";
        cin >> trainNumber[i];

        cout << "Enter Train Name: ";
        cin.ignore(); // Ignore any leftover newline character
        getline(cin, trainName[i]);

        cout << "Enter Source: ";
        getline(cin, source[i]);

        cout << "Enter Destination: ";
        getline(cin, destination[i]);

        cout << "Enter Train Time: ";
        getline(cin, trainTime[i]);
    }

    // Displaying the collected train details
    for (int i = 0; i < 3; i++) {
        cout << "\nTrain " << i + 1 << " Details:" << endl;
        cout << "Train Number: " << trainNumber[i] << endl;
        cout << "Train Name: " << trainName[i] << endl;
        cout << "Source: " << source[i] << endl;
        cout << "Destination: " << destination[i] << endl;
        cout << "Train Time: " << trainTime[i] << endl;
    }
}
