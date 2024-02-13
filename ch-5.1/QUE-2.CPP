#include <iostream>
using namespace std;

class Cricket {
public:
    virtual void getTotalOvers() {
        cout << "Total overs in a cricket match: 50" << endl;
    }
};

class T20Match : public Cricket {
public:
    void getTotalOvers() override {
        cout << "Total overs in a T20 match: 20" << endl;
    }
};

class TestMatch : public Cricket {
public:
    void getTotalOvers() override {
        cout << "Total overs in a Test match: Unlimited" << endl;
    }
};

int main() {
    T20Match t20;
    TestMatch test;
    
    cout << "T20 Match:" << endl;
    t20.getTotalOvers();
    
    cout << "\nTest Match:" << endl;
    test.getTotalOvers();
    
    return 0;
}
