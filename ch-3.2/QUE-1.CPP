#include <iostream>
#include <string>

using namespace std;

class Hotel {
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    string hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    void setHotelDetails(int id, string name, string type, string rating, string location, int establish_year, int staff_quantity, int room_quantity) {
        hotel_id = id;
        hotel_name = name;
        hotel_type = type;
        hotel_rating = rating;
        hotel_location = location;
        hotel_establish_year = establish_year;
        hotel_staff_quantity = staff_quantity;
        hotel_room_quantity = room_quantity;
    }

    void displayHotelDetails() {
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel Rating: " << hotel_rating << endl;
        cout << "Hotel Location: " << hotel_location << endl;
        cout << "Establishment Year: " << hotel_establish_year << endl;
        cout << "Number of Staff: " << hotel_staff_quantity << endl;
        cout << "Number of Rooms: " << hotel_room_quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of hotels: ";
    cin >> n;

    Hotel hotels[n];

    for (int i = 0; i < n; ++i) {
        int id, establish_year, staff_quantity, room_quantity;
        string name, type, rating, location;

        cout << "Enter details for Hotel " << i + 1 << ":" << endl;
        cout << "Hotel ID: ";
        cin >> id;
        cout << "Hotel Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Hotel Type: ";
        getline(cin, type);
        cout << "Hotel Rating: ";
        getline(cin, rating);
        cout << "Hotel Location: ";
        getline(cin, location);
        cout << "Establishment Year: ";
        cin >> establish_year;
        cout << "Number of Staff: ";
        cin >> staff_quantity;
        cout << "Number of Rooms: ";
        cin >> room_quantity;

        hotels[i].setHotelDetails(id, name, type, rating, location, establish_year, staff_quantity, room_quantity);
    }

    cout << "\nHotel Details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nHotel " << i + 1 << ":\n";
        hotels[i].displayHotelDetails();
    }
}
