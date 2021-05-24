/*  Make a program that constructs the binary file with the given nested structures. The given structure must be used in your program.
grades. txt: The text files that contains the names, SSN, 5 scores, and grade. This file has a total of 16 lines and each line is seperated by the delimter ','l
grades.bin : the text file that consists of the binary data structure "Score". This file should be made by your program and it must have the exact 16 records for the strucure Score.

In your program,
[Step 1] Read one line from the "grades.txt" file.
[Step 2] Split the line into 8 fields.
[Step 3] Fill the member variables of the structure "Score".
[Step 4] Write the structure into the binary file "grades.bin"

[Test] Download the test program and store it in the same directory with the file "grades.bin". 
*/
#include <iostream> // cout and cin
#include <fstream> // file input...
#include <cstring> // cstring stuff
#include <cctype> // more cstring functions
#include <sstream> // to be able to use sstream
using namespace std;

const unsigned short N = 5; // array length
struct Scores {
  double sc[N]; // array within a struct
  string grade;

};

struct Grade {
  string first;
  string last;
  string ssn;
  Scores score; // nested struct 
};

Grade g; // global struct member or whatever that's called

int main()
{
  ifstream ifs;
  // need to add code to insert text


  fstream f;
  f.open("grades.bin", ios:: out | ios:: binary);// if open write the conents used
                                                // used size of to make sure # bytes good
  if (f.is_open())
  {
    f.write(reinterpret_cast<char*>(&g), N*sizeof(Grade));
    f.close();
  }

  else 
    cout << "Error!\n";

  Grade h;

  f.open("grades.bin", ios :: in | ios :: binary); // used to read the contents into bin
  if (f.is_open())
  {
    f.read(reinterpret_cast<char*>(&h), N*sizeof(Grade));
    f.close();
  }
  else 
    cout << "Error!\n";
}