#include "students.hpp"
int main()
{
  int N;
  Students s[N];
  int i;
  string username;

  
  N = makerecord(s);
  i = 0;
  for(i = 0; i < N; i++)
    printrecord(s[i++]); // just gets one 

  cout << "Enter the username you want to find";
  cin >> username;
  findusername(s, N, username);

}

