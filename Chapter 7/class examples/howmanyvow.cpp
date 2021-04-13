#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

char name[] = "programming"l
int count = 0;
for(char eachchar : name)
{
  if (eachchar == 'a') || (eachchar == 'e') || (eachchar == 'i') || (eachchar == 'o') || (eachchar == 'u'))
  {
  cout << eachchar << endl;
  count ++;
  }
}
cout << count << endl;
return 0;
}