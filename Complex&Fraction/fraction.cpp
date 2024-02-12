#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int a)
{
    numerator = a;
    denominator = 1;
}

Fraction::Fraction(int a, int b)
{
    numerator = a;
    if (b == 0)
    {
        cout << "Denominator Cannot be zero!!";
        exit(1);
    }
    denominator = b;
    reduce();
}

Fraction::Fraction(const Fraction &C)
{
    numerator = C.numerator;
    denominator = C.denominator;
}

Fraction::~Fraction()
{
    cout << "";
}

void Fraction::show()
{
    cout << numerator << "/" << denominator << endl;
}

void Fraction::setdata(int a, int b)
{
    Fraction(a, b);
}

void Fraction::reduce()
{
    int dividend, divisor, remainder;
    if (numerator > denominator)
    {
        dividend = numerator;
        divisor = denominator;
    }
    else
    {
        dividend = denominator;
        divisor = numerator;
    }

    remainder = dividend % divisor;
    while (remainder > 0)
    {
        dividend = divisor;
        divisor = remainder;
        remainder = dividend % divisor;
    }
    numerator /= divisor;
    denominator /= divisor;
}

Fraction Fraction::operator-(int a)
{
    int n = numerator - a * denominator;
    return Fraction(n, denominator);
}
Fraction Fraction::operator*(int a)
{
    return Fraction(numerator * a, denominator);
}
Fraction Fraction::operator+(int a)
{
    int n = numerator + a * denominator;
    return Fraction(n, denominator);
}
Fraction Fraction::operator/(int a)
{
    return Fraction(numerator, denominator * a);
}
void Fraction::operator+=(int a)
{
    numerator += a * denominator;
    reduce();
}
void Fraction::operator*=(int a)
{
    numerator *= a;
    reduce();
}
void Fraction::operator-=(int a)
{
    numerator -= a * denominator;
    reduce();
}
void Fraction::operator/=(int a)
{
    denominator *= a;
    reduce();
}
void Fraction::operator+=(Fraction a)
{
    numerator = numerator * a.denominator + a.numerator * denominator;
    denominator *= a.denominator;
    reduce();
}
void Fraction::operator*=(Fraction a)
{
    denominator *= a.denominator;
    numerator *= a.numerator;
    reduce();
}
void Fraction::operator-=(Fraction a)
{
    numerator = numerator * a.denominator - a.numerator * denominator;
    denominator *= a.denominator;
    reduce();
}
void Fraction::operator/=(Fraction a)
{
    numerator *= a.denominator;
    denominator *= a.numerator;
    reduce();
}
Fraction Fraction::operator+(Fraction a)
{
    int x = numerator * a.denominator + a.numerator * denominator;
    int y = denominator * a.denominator;
    return Fraction(x, y);
}
Fraction Fraction::operator*(Fraction a)
{
    int x = numerator * a.numerator;
    int y = denominator * a.denominator;
    return Fraction(x, y);
}
Fraction Fraction::operator-(Fraction a)
{
    int x = numerator * a.denominator - a.numerator * denominator;
    int y = denominator * a.denominator;
    return Fraction(x, y);
}
Fraction Fraction::operator/(Fraction a)
{
    int x = numerator * a.denominator;
    int y = denominator * a.numerator;
    return Fraction(x, y);
}

Fraction operator+ (int a, Fraction b) {
    /** this is the definition. */
    b.numerator += a*b.denominator ;
    return b;
}

void Fraction:: operator=(const Fraction &a){
    denominator = a.denominator;
    numerator = a.numerator;
}

Fraction Fraction::operator++(){
    numerator += denominator;
    return *this;
}
Fraction Fraction::operator++(int){
    Fraction copy(numerator, denominator);
    numerator += denominator;
    return copy;
}

