// Complex.cpp

#include "Complex.h"

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

bool Complex::operator==(const Complex& other) const {
    return real == other.real && imaginary == other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

// double Complex::getReal() const {
//     return real;
// }

// double Complex::getImaginary() const {
//     return imaginary;
// }

// void Complex::setReal(double real) {
//     this->real = real;
// }

// void Complex::setImaginary(double imaginary) {
//     this->imaginary = imaginary;
// }
