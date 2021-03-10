#include <iostream>
using namespace std;

int main() {
  int numStu, numScores;
  string StuName;
  double score, sum, average;

  cout << "Enter the number of students and scores: " << endl;
  cin >> numScores >> numStu;

  
  for(int i = 0; i < numStu; i++) {

    cout << "Enter the student's name: " << endl;
    cin >> StuName;
    cout << "Student's name: " << StuName << "\t";

    sum = 0;
    for (int j = 0; j < numScores; j++) {
      cout << "Enter the student's score: ";
      cin >> score;
      cout << "Score " << j+1 << " : " << score << endl;
      sum += score;
    }
    average = sum / numScores;
    cout << " Sum of scores: " << sum << "\t" << endl;
    cout << " Average of scores: " << average << endl;
    
  }
}