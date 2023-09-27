// Complex.h

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
    Complex(double real, double imaginary);
    bool operator==(const Complex& other) const;
    Complex operator+(const Complex& other) const;
    double getReal() const;
    double getImaginary() const;
    void setReal(double real);
    void setImaginary(double imaginary);

private:
    double real;
    double imaginary;
};

#endif // COMPLEX_H
