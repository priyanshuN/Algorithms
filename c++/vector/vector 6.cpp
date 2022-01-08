#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> gquiz1(3, 10);
    vector <int> :: iterator it;

    it = gquiz1.begin();
    it = gquiz1.insert(it, 20);

    gquiz1.insert(it, 2, 30);

    it = gquiz1.begin();

    vector <int> gquiz2(2, 40);
    gquiz1.insert(it + 2, gquiz2.begin(), gquiz2.end());

    int gq [] = {50, 60, 70};
    gquiz1.insert(gquiz1.begin(), gq, gq + 3);

    cout << "gquiz1 contains : ";
    for (it = gquiz1.begin(); it < gquiz1.end(); it++)
        cout << *it << '\t';

    return 0;
}
