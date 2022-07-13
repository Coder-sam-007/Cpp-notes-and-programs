#include <iostream>
using namespace std;

// a struct is a collection of variables that are grouped together.
// a struct is a type of variable that is used to store heterogenous data.

// declaring a struct
struct book
{
  string title;
  string author;
  int pages;
};

int main()
{

  // initializing a struct
  struct book book1
  {
    "C++ Programming",
        "Zain",
        200
  };

  cout << book1.title << endl;
  cout << book1.author << endl;
  cout << book1.pages << endl;

  cout << "\n \n";

  // initializing a struct in a different way
  book book2;

  book2.title = "js Programming";
  book2.author = "The Zain";
  book2.pages = 106;

  cout << book2.title << endl;
  cout << book2.author << endl;
  cout << book2.pages << endl;

  cout << "\n \n";

  /* In C++ structures are already typedefed, ehich means we don't need to use this keyword to use it's property */

  return 0;
}