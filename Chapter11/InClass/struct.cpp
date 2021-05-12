#include <iostream>
using namespace std;

int main()
{
	const int N=3;
	struct Student
	{
		string sname;
		string Id;
		int scores[N];
		int TotalScore;
		int Avg;
	}  ;

  Student s1;
  Students s2;

  if (s1 == s2); // doesn't work need to compare the field basis / c ++ 17 support comparing to structs directly
  
  string str1, str2;

  if (str1 == str2)
  
  str1.compare(str2);
  s1.str1 == s2.str2;

  cout << "Enter student name: ";
  cin >> s.sname;
  cout << "Enter ID: ";
  cin >> s.Id;
  s.TotalScore = 0;
  for(int i=0; i<N; i++){
	  cin >> s.scores[i];
    s.TotalScore += s.scores[i];
  }
  s.Avg = s.TotalScore/ N;

  cout << s; // cannot use s directly, cannot acccess the class structure name directly here

  // print all fields, need a code to access all fields
  
