#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  ofstream myFile("abc.txt");

  myFile << "writing some words in this file programmatically"
         << "to later read it via running a C++ file";

  myFile.close();

  // reading the file line by line:

  ifstream readMyFile("abc.txt");

  string myTexts;

  while (getline(readMyFile, myTexts))
  {
    cout << myTexts;
  }

  readMyFile.close();

  return 0;
}