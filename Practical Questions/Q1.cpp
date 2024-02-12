#include<iostream>
using namespace std;

class NewFloat {
    float floatData;

public:
    NewFloat();
    NewFloat(float a);
    void printData();
    float deciData();
    NewFloat operator++();
    bool operator<(const NewFloat& other);
    operator int();
};

NewFloat::NewFloat() {
    floatData = 0.0;
}

NewFloat::NewFloat(float a) {
    floatData = a;
}

void NewFloat::printData() {
    cout << floatData << endl;
}

float NewFloat::deciData() {
    return floatData - static_cast<int>(floatData);
}

NewFloat NewFloat::operator++() {
    NewFloat temp = *this;
    floatData++;
    return temp;
}

bool NewFloat::operator<(const NewFloat& other) {
    return floatData < other.floatData;
}

NewFloat::operator int() {
    return static_cast<int>(floatData);
}

int main() {
    NewFloat obj(1.14);
    NewFloat obj2(2.20);

    cout << "The value of object 1 is ";
    obj.printData();

    cout << "The decimal part of floatData is " << obj.deciData() << endl;

    cout << "The increment of object 1 is ";
    NewFloat obj3 = ++obj;
    obj3.printData();

    cout << "Is object 1 less than object 2? " << (obj < obj2) << endl;

    cout << "Integer form of object 1 is " << static_cast<int>(obj) << endl;

    return 0;
}
