#include <iostream>
#include <fstream>

using namespace std;

int main(){
  int N;
  string stuName;
  double score1, score2;

  ofstream ofs;

  ofs.open("stuRecord.txt");
  if(!ofs) {
    cerr << "Open Error\n";
    exit(0);
  }

  cout << "How many students?: ";
  cin >> N;
  cout << N;
  for (int i= 0; i < N; i++) {
    cout << ofs 
  }
}