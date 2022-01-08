#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> gquiz1;
    vector <int> gquiz2;
    vector <int> :: iterator i;

    gquiz1.push_back(10);
    gquiz1.push_back(20);

    gquiz2.push_back(30);
    gquiz2.push_back(40);

    cout << "Before Swapping, \n"
         <<"Contents of vector gquiz1 : ";

    for (i = gquiz1.begin(); i != gquiz1.end(); ++i)
        cout << *i << '\t';

    cout << "\nContents of vector gquiz2 : ";
    for (i = gquiz2.begin(); i != gquiz2.end(); ++i)
        cout << *i << '\t';

    swap(gquiz1, gquiz2);

    cout << "\n\nAfter Swapping, \n";
    cout << "Contents of vector gquiz1 : ";
    for (i = gquiz1.begin(); i != gquiz1.end(); ++i)
        cout << *i << '\t';

    cout << "\nContents of vector gquiz2 : ";
    for (i = gquiz2.begin(); i != gquiz2.end(); ++i)
        cout << *i << '\t';

    cout << "\n\nNow, we clear() and then add "
         << "an element 1000 to vector gquiz1 : ";
    gquiz1.clear();
    gquiz1.push_back(1000);
    cout << gquiz1.front();

    return 0;
}
