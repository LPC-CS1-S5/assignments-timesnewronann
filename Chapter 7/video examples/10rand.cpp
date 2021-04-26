#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  const int N = 10; // sets the size of the array
  int num[N]; // array 

  ofstream ofs; // creates file variable 

  ofs.open("arraytofile.txt"); // opens the file to arraytofile.txt file
  if (!ofs) // if the file cannot open print this message and exit the program
  {
    cout << "Error: open to file\n";
    exit(0);
  }
  for (int i =0; i < N; i++) // prints the numbers to the file
  {
    num[i] = rand() % 100;
    ofs << num[i] << endl;
  }

}