#include "students.hpp"

int makerecord(Students s[])
{
  int i;
  i = 0;

  ifstream ifs;
  ifs.open("students.txt");
  if (ifs.fail())
  {
    cerr << "File open Error " << endl;
    exit(0);
  }

  while(ifs >> s[i].id >> s[i].sname >> s[i].screcord.score[0] >> s[i].screcord.score[i])
  {
    s[i].screcord.sum = 0;
    for (int idx = 0; idx < NUMCOURSE; idx++)
    {
      s[i].screcord.sum += s[i].screcord.score[idx];
    }
    s[i].screcord.avg = s[i].screcord.sum / NUMCOURSE;
    i++;
  }
}

void findusername(Students s[], int N, string username)
{
  int found = 0;
 for (int i = 0; i < N ; i++)
  {
   if (s[i].sname.find(username) != string :: npos)
    {
     cout << "We found the record for Maxim\n";
      printrecord(s[i]);
      found = 1;
    }
  }
    if (!found)
        cout << "We don't have the record for " << username << endl;
}

void printrecord(Students s)
{
    cout << "ID\t\t  Name\t  Scor1\t  Score2\t Sum\t Avg\n";
    cout << s.id << endl;
    cout << s.sname << endl;
    for (int idx = 0; idx < NUMCOURSE; idx++)
    {
      cout << s.screcord.score[idx] << endl;
    }
    cout << s.screcord.sum << endl;
    cout << s.screcord.avg << endl;
}
// 1 hour 20 mins into the video

//Just compile the same way 
//g++ struct3.cpp
