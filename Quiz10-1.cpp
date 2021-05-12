//In this program, we are going to count the occurrence of “th” in the paragraph.  We use the paragraph as follows, which is saved as a file with the name “python.txt”.

//“The Python 2 language was officially discontinued in 2020 (first planned for 2015), and Python 2.7.18 is the last Python 2.7 release and therefore the last Python 2 release. No more security patches or other improvements will be released for it. With Python 2's end-of-life, only Python 3.5.x and later are supported. thither“


//In order to count the number of occurrences of the keyword, we can use any kind of member function from the String class. All occurrences in a word should be counted as separate occurrences. For example, "thither" has two "th" substrings.

#include <iostream> // used for the cout and cin
#include <fstream> // used for file input output
#include <cctype> // used for the bool count for strlen and strstr
#include <cstring> // used for the character functions

using namespace std;
bool times(char[], char[]); // count the amount of th in the paragraph

int main()
{
  char python[5] = "th";
  char read[20];

  ifstream ifs;
  int count = 0;

  ifs.open("python.txt");
  if(ifs.fail())
  {
    cerr << "File open error: ";
    exit(0);
  }

  if (ifs)
  {
    while (ifs >> read)
    {
      int length;
      length = strlen(read); // get string length: returns the length of the c string str

      for ( int i = 0; i < length; i++)
      {
        if (isupper(read[i]))
        {
          read[i] = tolower(read[i]);
        }
      }
      if (times(read, python)) // reads the amount of th in the paragraph
      {
        cout << read << " " << python << endl;
        count++;
      }
    }
    cout << count << endl;
  }
}


bool times(char read[], char python[])
{
  char *pos;

  pos = (strstr(read, python));
  if (pos != NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}