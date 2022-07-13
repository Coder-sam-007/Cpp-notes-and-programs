#include <iostream>
using namespace std;
class Room{
    public:
    double length, breadth, height;
    double Area(){
        return length * breadth;
    }
    double Volume(){
        return length * breadth * height;
    }
};
int main()
{
    Room room1;


    double l, b, h;
    cout << "Enter the length of the room:"
    << endl;
    cin >> room1.length;

    cout << "Enter the height of the room:"
    << endl;
    cin >> room1.breadth;

    cout << "The the area of the room is: " << room1.Area()
    << endl;
    
    cout << "Enter the height of the room:"
    << endl;
    cin >> room1.height;
    cout << "The volume of the room is: " << room1.Volume()
    << endl;
    return 0;
}