
class Complex{
    public:
    float real;
    float imaginary;
    Complex(float a, float b);
    Complex(float a);
    void display();
    Complex add(Complex adder);
    Complex subtract(Complex sub);
    Complex operator+(Complex adder);
    Complex operator+(float add);
    Complex operator-(Complex sub);
};
