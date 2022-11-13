// Create two forward lists of int type, and merge them.
#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    {
        forward_list<int> flist1 = {10, 23, 4, 5, 6, 7};
        forward_list<int> flist2 = {200, 122, 123, 125, 126, 713};

        cout << "First list" << endl;
        for (int &a : flist1)
        {
            cout << a << " ";
        }

        cout << endl;

        cout << "second list" << endl;
        for (int &a : flist2)
        {
            cout << a << " ";
        }

        cout << endl;

        cout << "Merge list" << endl;

        flist1.merge(flist2);

        for (int &a : flist1)
        {
            cout << a << " ";
        }

        return 0;
    }
}