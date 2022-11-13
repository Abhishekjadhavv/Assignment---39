// Create a forward list insert elements from 1 to 10 and find the sum of elements.

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist;
    int sum = 0;
    flist.assign({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    for (int &a : flist)
    {
        sum += a;
    }

    cout << "Sum is : " << sum << endl;
    return 0;
}