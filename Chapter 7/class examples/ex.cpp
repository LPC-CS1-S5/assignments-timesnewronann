#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
  int randNum[5];
//   int sameNum = 2;
  int sameNum = 0; // Now, it works :)
  srand(time(0));

  for (int i = 0; i <5; i++)
  {
    randNum[i] = (rand() % 10);
    if (randNum[0] == randNum[i])
    {
      sameNum++;
    }
    cout << randNum[i] << endl;
  }
  cout << "There are " << sameNum  << " random numbers" << endl;
}
