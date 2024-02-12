#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(float a, float b=0){
    this->real = a;
    this->imaginary = b;
};
Complex::Complex(float a){
    this->real = a;
    this->imaginary = 0;
};
void Complex::display(){
    cout<< this->real <<" + " << this->imaginary << "j\n";
}
Complex Complex::add(Complex adder){
    return Complex(this->real + adder.real , this->imaginary + adder.imaginary);
};
Complex Complex::subtract(Complex sub){
    return Complex(this->real - sub.real , this->imaginary - sub.imaginary);
};
Complex Complex::operator+(float add){
    return Complex(this->real + add , this->imaginary);
};
Complex Complex::operator+(Complex adder){
    return Complex(this->real + adder.real , this->imaginary + adder.imaginary);
};
Complex Complex::operator-(Complex sub){
    return Complex(this->real - sub.real , this->imaginary - sub.imaginary);
};
