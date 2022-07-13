#include <iostream>
using namespace std;

// iterating via function

void display(string arr3[10])
{
  cout << "Iterating via function: \n\n";

  for (int i = 0; i < 10; i++)
  {
    cout << arr3[i] << " ";
  };
}

void display(string arr[][4])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << "arr[" << i << "]"
           << "[" << j << "] = " << arr[i][j] << endl;
    }
  }
};

int main()
{
  int arr1[3] = {10, 20, 30};
  int arr2[] = {12, 14, 16, 18, 20};
  string arr3[10] = {"The", "Zain", "is", "a", "good", "coder"};

  cout << arr3[0].length() << endl;
  cout << arr3[1].size() << endl;

  // iterating a number array
  int i = 0;
  while (sizeof(arr2) / sizeof(arr2[0]) > i)
  {
    cout << arr2[i] << endl;
    i++;
  }

  // iterating a string array

  for (int i = 0; i < 10; i++)
  {
    cout << arr3[i] << " ";
  }

  display(arr3);

  // multi-dimensional array

  string letters[2][4] = {
      {"A", "B", "C", "D"},
      {"E", "F", "G", "H"}};

  cout << "\nvalue of 1:1 position of the letters array: " << letters[1][1] << endl; // Outputs "C"

  display(letters);

  cout << "\n\n";

  // C++ int to string Conversion
  int num = 108;
  string num_str = to_string(num);
  cout << "num_str: " << num_str << endl;

  // C++ string to int Conversion
  string num_str2 = "108";
  int num2 = stoi(num_str2);
  cout << "num2: " << num2 << endl;

  // C++ string to double Conversion
  string num_str3 = "108.5";
  double num3 = stod(num_str3);
  cout << "num3: " << num3 << endl;

  // entering and displaying the string

  string quote;
  cout << "Enter a quote: ";
  getline(cin, quote);

  cout << quote << endl;

  return 0;
}