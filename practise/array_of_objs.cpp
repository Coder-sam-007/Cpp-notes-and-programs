#include <iostream>
using namespace std;

class student_data
{
private:
  string Name;
  int Class;
  int Roll;

public:
  void getData()
  {
    cout << "\nEnter your name: ";
    cin >> Name;

    cout << "Enter your class: ";
    cin >> Class;

    cout << "Enter your roll no: ";
    cin >> Roll;
  }

  void showData()
  {
    cout << "\nName: " << Name << endl;
    cout << "Class: " << Class << endl;
    cout << "Roll no: " << Roll << endl;
  }
};

int main()
{
  int n;
  cout << "Enter the no. of students: ";
  cin >> n;

  student_data data[n];

  for (int i = 0; i < n; i++)
  {
    data[i].getData();
    data[i].showData();
  }

  return 0;
}