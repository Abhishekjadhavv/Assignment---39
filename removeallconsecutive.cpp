// Write a program remove all consecutive duplicate elements from the forward list
#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist = {12, 12, 34, 34, 56, 56, 12, 56, 89};

    cout << "Before removing all consecutive duplicate elements from forward list" << endl;
    for (int &a : flist)
    {
        cout << a << " ";
    }
    cout << endl;

    flist.unique();
    
    cout << "After removing all consecutive duplicate elements from forward list" << endl;
    for (int &a : flist)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}