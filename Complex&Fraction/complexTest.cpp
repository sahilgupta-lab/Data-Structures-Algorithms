#include<iostream>
#include "Complex.h"

using namespace std;
 
int main(){
    Complex c(1) ;
    Complex b(2,4) ; 
    c.display();
    b.display();
    Complex d = c.add(b);
    Complex e = c-b;
    d.display();
    e.display();
    return 0;
}