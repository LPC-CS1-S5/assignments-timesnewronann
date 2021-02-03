// Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales.

//Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.

//class A seats cost $15
//Class B seats cost $12 
//Class C seats cost $9
// const int ClassA = 15;

#include <iostream>

using namespace std;

int main()
{
  const int ClassA = 15;
  const int ClassB = 12;
  const int ClassC = 9;
  int ticketAsold;
  int ticketBsold;
  int ticketCsold;

  cout << " Enter the number of tickets sold" << endl;
  cin >> ticketAsold >> ticketBsold >> ticketCsold;

  int costA = ticketAsold * ClassA;
  int costB = ticketBsold * ClassB;
  int costC = ticketCsold * ClassC;

  cout << " Income generated" << endl;
  cout << costA << endl;
  cout << costB << endl;
  cout << costC << endl;
  
}