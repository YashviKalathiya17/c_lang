#include <iostream>
using namespace std;

class Distance {
private:
    int km;
    int meter;

public:
    Distance(int km = 0, int meter = 0) : km(km), meter(meter) {}

    Distance operator+(const Distance& d) {
        int total_meter = (km * 1000 + meter) + (d.km * 1000 + d.meter);
        int total_km = total_meter / 1000;
        total_meter %= 1000;
        return Distance(total_km, total_meter);
    }

    void display() {
        cout << "Km: " << km << ", Meter: " << meter << endl;
    }
};

int main() {
    int km1, meter1, km2, meter2;

    cout << "Enter distance 1 (Km Meter): ";
    cin >> km1 >> meter1;

    cout << "Enter distance 2 (Km Meter): ";
    cin >> km2 >> meter2;

    Distance dist1(km1, meter1);
    Distance dist2(km2, meter2);

    Distance total_distance = dist1 + dist2;
    cout << "Total Distance: ";
    total_distance.display();

    return 0;
}
