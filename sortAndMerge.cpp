// Below are two forward lists, first sort them and then merge them.
// forwardlist1={3,2,9}
// forwardlist2={8,1,2}

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist1 = {3, 2, 9};
    forward_list<int> flist2 = {8, 1, 2};

    flist1.sort();
    flist2.sort();

    flist1.merge(flist2);

    for (int &a : flist1)
    {
        cout << a << " ";
    }
    
    return 0;
}