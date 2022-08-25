#include <iostream>
using namespace std;

class student
{
public:
  string name;
  int age;
  int rollno;

  void getdata()
  {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter rollno: ";
    cin >> rollno;
  }

  void modify();

  void display()
  {
    cout << "\nStudent details: \n"
         << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Rollno: " << rollno << endl;
  }
};

// declaring function outside the class
void student::modify()
{
  cout << "\nRe-Enter Student details: \n"
       << endl;

  cout << "Enter new name: ";
  cin >> name;
  cout << "Enter new age: ";
  cin >> age;
  cout << "Enter new rollno: ";
  cin >> rollno;
}

int main()
{

  student s;
  s.getdata();
  s.display();
  cout << "\n";

  // modifying the data
  s.name = "John";
  s.display();

  // using a function outside the class
  s.modify();
  s.display();

  return 0;
}

/* In C++, there are three access specifiers:

** public - members are accessible from outside the class

** private - members cannot be accessed (or viewed) from outside the class

** protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

*/