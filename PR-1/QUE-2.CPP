#include<iostream>

using namespace std;

int main() {
    int seconds;

    
    cout << "Enter seconds: ";
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = seconds % 60;

    cout << hours << ":" << minutes << ":" << remainingSeconds << endl;

}
