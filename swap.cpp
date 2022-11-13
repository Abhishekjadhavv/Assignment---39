// Create two forward lists of int type, and swap the elements of both forward lists with
// each other.

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist1 = {67, 88, 90};
    forward_list<int> flist2 = {23, 45, 78};

    cout << "Before swaping" << endl;
    cout << "First list : ";
    for (int &a : flist1)
    {
        cout << a << " ";
    }
    cout << endl;

    cout << "second list : ";
    for (int &a : flist2)
    {
        cout << a << " ";
    }
    cout << endl;

    flist1.swap(flist2);

    cout << "After swaping" << endl;
    cout << "First list : ";
    for (int &a : flist1)
    {
        cout << a << " ";
    }
    cout << endl;

    cout << "second list : ";
    for (int &a : flist2)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}