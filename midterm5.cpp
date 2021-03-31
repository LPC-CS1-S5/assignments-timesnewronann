#include <iostream> 
#include <fstream>
using namespace std;

void getInput(int %, int %);
int isSame(int %, int%);
int intDivision(int, int);
void fileWrite(ofstream, int);

int main()
{

}

void getInput(int %n1, int %n2)
{
  cout << "Enter the first number: " << endl;
  cin >> n1;
  cout << "Enter the second number:" << endl;
  cin >> n2;

}

int isSame(int n1, int n2)
{
  if (n1 == n2)
    return 1;
  return 0;
}

int intDivision(int n1, int n2)
{
  if (n1 > n2)
   
}

void writefile (ofstream &ofs, int div)
{
  ofs << div << endl;
  if (ofs.fail())
  {
    cerr << "File Write Error \n";
    exit(0)
  }
}