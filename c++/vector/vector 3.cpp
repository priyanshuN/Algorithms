#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector <int> g1;

    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);

    cout << "Reference operator [g] : g1[2] = " << g1[2];
    cout << endl;
    cout << "at : g1.at(4) = " << g1.at(4);
    cout << endl;
    cout << "front() : g1.front() = " << g1.front();
    cout << endl;
    cout << "back() : g1.back() = " << g1.back();
    cout << endl;

    return 0;

}
