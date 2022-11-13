// Write a C++ code to demonstrate working of splice_after() in forward list.

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist = {12, 1, 2, 45, 67};
    cout << "Before splice_After" << endl;
    for (int &a : flist)
    {
        cout << a << " ";
    }
    cout << endl;

    flist.splice_after(flist.begin(), {20, 10, 30});
    cout << "After splice_After" << endl;
    for (int &a : flist)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}