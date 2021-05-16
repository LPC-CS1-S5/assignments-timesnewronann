// A structure can contain another structure as a member;
/*struct PersonInfo
{
  string name,
    address,
    city;

};

struct Student
{
  int studentID;
  PersonInfo pData; // Strucutre PersonINfo is a member variable in structure student
  short yearInSchool;
  double GPA;
}
 
Members of Nested Structures:
Use the dot operator multiple times
  to refer to fields of nested structures:
  Student s;
  s.pData.name = "Joanne" ;
  s.pData.city = "Tulsa" ;

*/
#include <iostream>
using namespace std;
const unsigned short NUMCOURSE = 2;

struct Scores { // will be a memeber variable for structure student 
  int scores[NUMCOURSE];
  int sum;
  int avg;
};

struct Student {
  int id;
  string name;
  Scores screcord;
};

Student S[10];

int main()
{
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter your id: ";
    cin >> S[i].id;
    cout << "Enter your name: ";
    cin >> S[i].name;
    cout << "Ente your scores: ";
    cin >> S[i].screcord.scores[0] >> S[i].screcord.scores[1];
    s[i].screcord.sum = s[i].screcord.scores[0] + s[i].screcord.scores[1];
    s[i].screcord.avg = s[i].screcord.sum / NUMCOURSE;
    
  }
}