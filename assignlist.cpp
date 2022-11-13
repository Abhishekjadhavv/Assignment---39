// Write a program to assign values in forward_list using the values of another list

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist = {204, 23, 4, 5, 67};
    forward_list<int> flist1;

    flist1.assign(flist.begin(), flist.end());
    for (int &a : flist1)
    {
        cout << a << " ";
    }

    return 0;
}