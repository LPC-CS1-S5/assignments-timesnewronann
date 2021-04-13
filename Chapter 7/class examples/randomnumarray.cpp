#include <iostream>;
#include <ctime>;
#include <cstdlib>;

using namespace std;

int main()
{
  int num[5]; // simplest array declaration
  int numbers[] = {10, 20, 30}; // This is okay 3 element declaration
  char name[5];
  double scores[3] = {10.0, 20.0}; // You don't need all of the elements it is fine with just 2
  // The rest of them are initialized to 0
  int poopoo[100] = {0}; //The first element = 0, the rest of them = 0

  

  cout << numbers[4] << endl; // works and prints in c++, prints out garabage value
  cout << "Size of number " << sizeof(numbers) << endl; 
  cout << "Size of name " << sizeof(name) << endl;
  cout << "Size of score " << sizeof(score) << endl;

 
  cout << "The first element of score" << scores[2] << endl;
  
  
  
  
  srand(time(0));
  for (int i = 0; i <5; i++) // random number array 
  {
    num[i] = (rand() % 100);
    cout << num[i] << endl;
  }
  
  for(int i= 0;i < 5; i++)
  {
    sum += num[i];
  }
  cout << sum << endl;


}