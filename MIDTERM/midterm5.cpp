#include <iostream> 
#include <fstream>
using namespace std;

void getInput(int &, int &);
int isSame(int, int);
int intDivision(int, int);
void fileWrite(ofstream &, int);

int main()
{
  int num1, num2;
  int div;

  ofstream ofs; // make ofstream
  ofs.open("question5.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error\n";
    exit(0);
  }
  
  while(1)
  {
    getInput(num1, num2);
    if ( isSame(num1,num2))
      break;
    div = intDivision(num1, num2);
    fileWrite(ofs,div);

  }
  ofs.close();
}

void getInput(int &n1, int &n2)
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
  int result;
  if (n1 > n2) {
    result = (n1 / n2);
  }
  else
    result = (n2/ n1);
  
  return result;
  
}

void fileWrite (ofstream &ofs, int div)
{
  ofs << div << endl;
  if (ofs.fail())
  {
    cerr << "File Write Error \n";
    exit(0);
  }
  
}