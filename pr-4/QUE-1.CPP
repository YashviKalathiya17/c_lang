#include <iostream>
#include <string>
using namespace std;

class Message {
private:
    string _message;

public:
     
    Message(const tring& initial_message = "") : _message(initial_message) {
                  }

    void print() {
        cout << _message << endl;
    }

    void print(const string& additional_message) {
        cout << _message << " " << additional_message << endl;
    }
};

int main() {
    string user_input;
    
    cout << "Enter a message: ";
    getline(cin, user_input);

    Message msg(user_input);
    cout << "Message stored in the object: ";
    msg.print();

    
    cout << "Enter an additional message: ";
    getline(cin, user_input);

    cout << "Message stored in the object with additional message: ";
    msg.print(user_input);

    return 0;
}
