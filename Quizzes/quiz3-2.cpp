#include <iostream> 
#include <iomanip> // need for the setprecision
#include <cstdlib> // for random
#include <ctime> // for time

using namespace std;
int main()
{
  unsigned seed = time(0); // used for the system time

  srand(seed); // generates a random number
  
  int num1 = random() ; // the prompt doesn't mention needing a range for the random numbers so I just left it as is
  int num2 = random() ;
  int num3 = random() ;

  float sum = num1 + num2 + num3; // used to get the sum

  float average = (sum)/3; // used to get the average
  
  cout << setprecision(5) << num1 <<endl; // prints out the random numbers 
  cout << setprecision(5) << num2 <<endl;
  cout << setprecision(5) << num3 <<endl;
  cout << "The sum of the three random numbers is: " <<setprecision(5) << sum << endl; //prints out the sum
  cout << "The average of the three random numbers is: " <<setprecision(5) << average << endl; // prints out average

  return 0;
}
