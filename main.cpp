#include <iostream>
using namespace std;

class Resistor {
private:
    double resistance; 

public:
    Resistor(double r) 
    {
        resistance = r;
    }

    double calculateVoltage(double current) {
        return current * resistance;
    }

    void displayInfo() {
        cout << "Resistor ki Value: " << resistance << " Ohms" << endl;
    }
};

int main() {
    cout << "--- DC Circuit Analyzer ---" << endl;

    Resistor r1(15.5); 
    r1.displayInfo();

    double current = 2.0; // 2 Amperes
    cout << "Circuit me Current: " << current << " A" << endl;

    // Voltage calculate
    cout << "Voltage Drop (V = IR): " << r1.calculateVoltage(current) << " V" << endl;

    return 0;
}