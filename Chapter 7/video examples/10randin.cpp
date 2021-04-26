#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  const int N = 10;
  int num[N];
  ifstream ifs;

  ifs.open("arraytofile.txt");
  if(!ifs)
  {
    cout << "Error: open file" <<endl;
    exit(0);
  }

  for (int i = 0; i < N; i++)
  {
    ifs >> num[i];
  }
}