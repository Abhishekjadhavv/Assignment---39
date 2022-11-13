// Write a c++ code, to demonstrate the forward list.
#include <forward_list>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    // Initializing forward list
    forward_list<int> flist = {23, 45, 67, 89};

    for (int &a : flist)
    {
        cout << a << " ";
    }
    cout << endl;

    flist.push_front(100);
    flist.insert_after(flist.begin(),300);
    flist.pop_front();;
    flist.sort();
    flist.reverse();

    for (int &a : flist)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}