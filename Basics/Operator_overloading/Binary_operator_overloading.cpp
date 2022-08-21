#include <iostream>
using namespace std;

class Complex
{
private:
  float real;
  float imag;

public:
  Complex() : real(0), imag(0) {}

  void input()
  {
    cout << "Enter real and imaginary parts respectively: ";
    cin >> real >> imag;
  }

  Complex operator+(const Complex &obj)
  {
    Complex temp;
    temp.real = real + obj.real;
    temp.imag = imag + obj.imag;
    return temp;
  }

  void output()
  {
    if (imag < 0)
      cout << "Output Complex number: " << real << imag << "i";
    else
      cout << "Output Complex number: " << real << "+" << imag << "i";
  }
};

int main()
{
  Complex complex1, complex2, result;

  cout << "Enter first complex number:\n";
  complex1.input();

  cout << "Enter second complex number:\n";
  complex2.input();

  result = complex1 + complex2;
  result.output();

  return 0;
}
/*

C++ provides a special function to change the current functionality of some operators within its class which is often called as operator overloading. when we try to change the normal functionality of an binary operator like + or -, we call it binary operator overloading.

Things to Remember in C++ Operator Overloading:

Operator overloading cannot change the precedence and associativity of operators. However, if we want to change the order of evaluation, parentheses should be used. */