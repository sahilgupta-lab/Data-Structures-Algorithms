#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
   Fraction f3by4(3, 4);
   f3by4 += 1;
   f3by4.show();
   f3by4 -= 1;
   Fraction did = f3by4 / Fraction(1,2);
   did = 12 + did;
   did.show();
   return 0;
}
