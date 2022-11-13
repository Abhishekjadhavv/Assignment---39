// Write a c++ code, in which create a forward list and assign values to it at the time of
// initialization and print it on the console screen.

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist = {204, 23, 4, 5, 67};
    for (int &a : flist)
    {
        cout << a << " ";
    }

    return 0;
}