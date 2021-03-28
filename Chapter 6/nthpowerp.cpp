#include <iostream>
using namespace std;
double nthpowerp(int num){
  //int num;
  int i;
  int nthPower = 1;
  int n;

//   n = num;

  for (i = 0; i < num; i++)
  {
    nthPower *= 2;
  }
  cout << "2"<< "^" << num << "=" << nthPower << endl;

  return nthPower;

}

