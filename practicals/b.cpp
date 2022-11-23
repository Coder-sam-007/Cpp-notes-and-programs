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
  cout << "\n";

  cout << "Enter second complex number:\n";
  complex2.input();
  cout << "\n";

  result = complex1 + complex2;
  result.output();

  return 0;
}

/*

 Output:

Enter first complex number:
Enter real and imaginary parts respectively: 24 20

Enter second complex number:
Enter real and imaginary parts respectively: 20 40

Output Complex number: 44+60i

 */