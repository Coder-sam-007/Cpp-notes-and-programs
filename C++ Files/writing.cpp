#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // creation and opening a file
  ofstream testFile("test.txt");

    // writing into the file
  testFile << "some words are written into this file programmaticaly";

  // closing the file
  testFile.close();

  // we close the file after doing our work to clean unwanted memory space.

  return 0;
}