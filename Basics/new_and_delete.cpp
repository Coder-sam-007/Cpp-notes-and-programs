#include <iostream>
using namespace std;
/*
C++ allows us to allocate the memory of a variable or an array in run time. This is known as dynamic memory allocation.

Note: If the program uses a large amount of unwanted memory using new, the system may crash because there will be no memory available for the operating system. In this case, the delete operator can help the system from crash.
 */

class Employee
{
private:
  string name;
  int age;
  int salary;

public:
  Employee()
  {
    salary = 20000;
  }

  void setInfo();
  void displayInfo();
};

void Employee::setInfo()
{

  cout << "\n\nEnter Employee Details:\n";
  cout << "Enter Name: ";
  cin >> name;
  cout << "Enter Age: ";
  cin >> age;
}

void Employee::displayInfo()
{
  cout << "\nName: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Salary: " << salary << "\n";
}

int main()
{

  // declare an int pointer
  int *pointVar;

  // dynamically allocate memory
  // for an int variable
  pointVar = new int;

  // assign value to the variable memory
  *pointVar = 45;

  // print the value stored in memory
  cout << "*pointvar = " << *pointVar << " :This is a dynamic variable\n"; // Output: 45

  // deallocate the memory
  delete pointVar;

  /* Here, we have dynamically allocated memory for an int variable using the new operator.

   Notice that we have used the pointer pointVar to allocate the memory dynamically. This is because the new operator returns the address of the memory location.

   In the case of an array, the new operator returns the address of the first element of the array. */

  // using pointers to dynamically allocate memory for an array

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  float *ptr;

  // memory allocation of num number of floats
  ptr = new float[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i)
  {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i)
  {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  /* Notice the use of [] after delete. We use the square brackets [] in order to denote that the memory deallocation is that of an array. */

  // using pointers to dynamically allocate memory for an object

  Employee *new_employee = new Employee;

  new_employee->setInfo();
  new_employee->displayInfo();

  delete new_employee;

  return 0;
}
