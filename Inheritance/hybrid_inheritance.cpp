#include <iostream>
using namespace std;

class grandParent
{
public:
  void grand_parent_quality()
  {
    cout << "Good muscles" << endl;
  }
};

class parent : public grandParent
{
public:
  void parent_quality()
  {
    grand_parent_quality();
    cout << "A sharp mind" << endl;
  }
};

class child1 : public parent
{
public:
  child1()
  {
    cout << "Child1 have the following qualities from his parent:" << endl;
    parent_quality();
  }
};

class child2 : public parent
{
public:
  child2()
  {
    cout << "\nChild2 have the following qualities from his parent:" << endl;
    parent_quality();
  }
};

int main()
{
  child1 sam;
  child2 jim;
  return 0;
}

/* Hybrid (Virtual) Inheritance:

Hybrid Inheritance is a type of inheritance, which is created by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance.

Inheritance Chart:

MultiLevel: grandparent --> parent --> child

                  +

                        / -- child1
Heirarchial:  parent --/
                        \
                         \ -- child2

                  =

                                   / -- child1
Hybrid:   grandparent -> parent --/
                                   \
                                    \ -- child2

 */