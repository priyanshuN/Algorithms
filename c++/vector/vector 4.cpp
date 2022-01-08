#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1;
    vector <int> g2;
    vector <int> g3;

    g1.assign(5, 10);   // 5 elements with value 10 each

    vector <int> :: iterator it;
    it = g1.begin() + 1;

    g2.assign(it, g1.end() - 1); // the 3 middle values of g1

    int gquiz[] = {1, 2};
    g3.assign(gquiz, gquiz + 2);   // assigning from array

    cout << "Size of g1: " << int(g1.size()) << '\n';
    cout << "Size of g2: " << int(g2.size()) << '\n';
    cout << "Size of g3: " << int(g3.size()) << '\n';
    return 0;
}
