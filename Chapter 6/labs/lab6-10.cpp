#include <iostream> 
using namespace std;

void swap(int&, int&);
void swap(int&, int&, int&);
void swap(int&, int&, int&, int&);
void getInput(int&);
void getInput(int&, int&);
void getInput(int&, int&, int&);
void getInput(int&, int&, int&, int&);

int main()
{
  int num;
  int val1, val2, val3, val4;

  do {
    getInput(num);
    switch(num){
      case 2:
      getInput(val1, val2);
      swap(val1,val2);
      break;

      case 3:
      getInput(val1, val2, val3);
      swap(val1, val2, val3);
      break;

      case 4:
      getInput(val1, val2, val3, val4);
      swap(val1, val2, val3, val4);
      break;

      default:
      break;
    }
  } while (num != -1)

}

void swap(int &val1, int &val2) // regular swap of the values
{
  int tmp;
  tmp = val1;
  val1 = val2;
  val2 = tmp;

}

void swap(int &val1, int &val2, int&val3) // change the value with the order
{
  int tmp;
  swap(val1,val2);
  swap(val2,val3);

}

void swap(int &val1, int &val2, int &val3, int &val4) // change the value liek a circular-shift-right[A,B,C,D] = > [B,C,D,A]
{
  int tmp;
  swap(val1,val2);
  swap(val2,val3);
  swap(val3,val4)l

}

void getInput(int &val1, int &val2, int &val3, int &val4)
{
  cout << "Enter your values\n";
  cin >> val1 >> val2 >> val3 >> val4;

}

void getInput(int &val1, int &val2, int &val3)
{
  cout << "Enter your values\n";
  cin >> val1 >> val2 >> val3;

}

void getInput(int &val1, int &val2)
{
  cout << "Enter your values\n";
  cin >> val1 >> val2;

}

void getInput(int &val1)
{
  cout << "Enter your value\n";
  cin >> val1;
}