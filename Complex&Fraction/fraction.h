#include <iostream>
using namespace std;
class Fraction
{
private:
  int numerator, denominator;

public:
  Fraction();
  Fraction(int a);
  Fraction(int a, int b);
  Fraction(const Fraction &C);
  ~Fraction();
  void show();
  void setdata(int a, int b);
  void reduce();
  Fraction operator+(int a);
  Fraction operator*(int a);
  Fraction operator-(int a);
  Fraction operator/(int a);
  Fraction operator+(Fraction a);
  Fraction operator*(Fraction a);
  Fraction operator-(Fraction a);
  Fraction operator/(Fraction a);
  void operator+=(int a);
  void operator*=(int a);
  void operator-=(int a);
  void operator/=(int a);
  void operator+=(Fraction a);
  void operator*=(Fraction a);
  void operator-=(Fraction a);
  void operator/=(Fraction a);
  friend Fraction operator+(int a, Fraction b);
  void operator=(const Fraction &a);
  Fraction operator++();
  Fraction operator++(int);
};