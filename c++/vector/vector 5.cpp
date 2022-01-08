#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> gquiz;
  int sum = 0;
  gquiz.push_back(10);
  gquiz.push_back(20);
  gquiz.push_back(30);

  while (!gquiz.empty())
  {
    sum += gquiz.back();
    gquiz.pop_back();
  }

  cout << "The sum of the elements of gquiz is :  "
       << sum << '\n';

  return 0;
}
