#include <iostream>
using namespace std;

struct studentData
{
  string name;
  int age;
  int marks;
};

void EnterStudentData(studentData &student)
{
  cout << "Enter Name: ";
  cin >> student.name;
  cout << "Enter Age: ";
  cin >> student.age;
  cout << "Enter Marks: ";
  cin >> student.marks;
};

studentData displayStudentData(studentData student)
{
  cout << "Name: " << student.name << endl;
  cout << "Age: " << student.age << endl;
  cout << "Marks: " << student.marks << endl;
  return student;
}

// passing a structre to a function by refrence

void displayData_viaPointer(studentData *student)
{
  cout << "Name: " << student->name << endl;
  cout << "Age: " << student->age << endl;
  cout << "Marks: " << student->marks << endl;
}

int main()
{

  studentData student[3];

  // for (int i = 0; i < 3; i++)
  // {
  //   EnterStudentData(student[i]);
  //   cout << "\n"
  //        << endl;
  // }

  cout << "Student Data: \n"
       << endl;

  /* for (int i = 0; i < 3; i++)
  {
    displayStudentData(student[i]);
    cout << "\n"
         << endl;
  }
 */
  /******* pointer to structure  *********/

  studentData newStudent;
  studentData *ptr;

  ptr = &newStudent;

  (*ptr).name = "John"; // (*ptr).name = newStudent.name; = ptr->name; = "John";
  (*ptr).age = 20;      // (*ptr).age = newStudent.age; = ptr->age; = 20;
  (*ptr).marks = 90;    // (*ptr).marks = newStudent.marks; = ptr->marks; = 90;

  cout << "Student Data: \n"
       << endl;

  displayStudentData(newStudent);

  ptr->name = "jane";
  ptr->age = 21;
  ptr->marks = 91;

  cout << "Student Data: \n"
       << endl;

  displayStudentData(newStudent);

  displayData_viaPointer(&newStudent);

  return 0;
}