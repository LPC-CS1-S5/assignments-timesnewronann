#include <iostream>
using namespace std;

void primenumber(int,int);
int main()
{
  int begin,end;
  
  do{
    cout << "Please,enter two integers from 1 to 100 " << endl;
    cin >> begin >> end; 
  }
  while(begin > end);
  primenumber(begin,end); 
}

void primenumber(int begin,int end)
{
  int i,j;
	for (i=begin; i<end; i++){
		for(j=2; j< i/j ;j++){
			if(i%j==0)
			break;
		}
	if (i==j)
		cout << i << " is prime number" <<endl;
	}
}

  
