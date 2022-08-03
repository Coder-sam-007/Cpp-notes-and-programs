
/* C++ was an added version of C developed by "Bjarne Stroustrup".

It is believed to be very close to the hardware making it comparatively easy for programmers to give the instructions directly to the system without any intermediary.

C++  is an object-oriented programming language giving it the power to create real-world software systems. */

/* there are two types of header files:

1. system header files: it comes with the system and is used to define the basic data types and functions.

2. user header files: it is created by the programmer and is used to define the user-defined data types and functions.

example: #include this.h is a user header file.
we need to place the custom file in the root folder*/

#include <iostream>
#include "custom.h"
using namespace std;

int main()
{
    cout << "\nwelcome to the C++ world 😎\n\n";
    printMyMsg();

    return 0;
}
