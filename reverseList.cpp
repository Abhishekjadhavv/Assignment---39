// Write a program to reverse forward list elements.
#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist{203,40,43,56,78};

    cout << "Before reverse forward list" << endl;
    for (int &a : flist)
    {
        cout << a << " ";
    }

    cout << endl;

    flist.reverse();

    cout << "After reverse forward list" << endl;
    for (int &a : flist)
    {
        cout << a << " ";
    }

    return 0;
}