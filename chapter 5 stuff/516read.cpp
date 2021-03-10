#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs;

    int num;
    string studentName;
    double num1,num2,sum, avg;

    ifs.open("stuRecord.txt");

    if (ifs.fail())
    {
      cerr << "File Read Error" << endl;
      exit(0);
    }

    while (ifs >> studentName)
    {
      cout << studentName << endl;
    }

    ifs.close();
}