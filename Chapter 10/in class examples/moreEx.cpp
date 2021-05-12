#include <iostream>
#include <cstring>
using namespace std;

int  stringLength(char []);
void stringCopy(char [], char []);
int  stringCompare(char [], char []);
int stringSplit(const char[], char [][100], char)

int main()
{
	char cstr1[20] = "program";
	char cstr2[20] = "C++";
	int  length = 0;
	int ret;


	length = stringLength(cstr1) ;
	cout << "String length is " << length << endl;

	stringCopy(cstr1, cstr2);
	cout << "Copied string is " << cstr1 << endl;

	ret = stringCompare(cstr1, cstr2);

	char source[100] = " C++, Programming, Section, 03";
  char splitlist[10][100]; 
	ret = stringSplit(source, splitlist, ',');
	for(int i=0; i<ret; i++)
		cout << "Split list " << splitlist[i] << endl;

}
int stringSplit(const char source[], char dest[][100], char delimiter) // function for string plit
{
	int i=0, j=0, cnt=0;
	while( source[i] != '\0'){  // traverse the source for all characters until it meets the source character 
		dest[cnt][j++] = source[i] ;
		if ( source[i] == delimiter){
			dest[cnt][j-1] = '\0';
			cnt++;
			j = 0;
		}
		i++;
	}
	dest[cnt][j] = '\0';
	if ( j==0)
		cnt--;
	return cnt+1;
}

int stringCompare(char cstr1[], char cstr2[])
{
    int i = 0;
	while ( ( cstr1[i] != '\0') && ( cstr2[i] != '\0') )
	{
		if ( cstr1[i] != cstr2[i])
			return -1;
	}
	if (cstr1[i] == '\0')
		return 1;
	if (cstr2[i]== '\0')
		return 2;

	if ( (cstr1[i]=='\0') && (cstr2[i] == '\0') )
		return 0;

		//1) one of two is '\0'
		//    1-1 : first is '\0' => 2nd includes 1st.  return 2
		//      1-2 : second is '\0' => 1st includes 2nd. return 1
		// 2) both of two is '\0' => both are the same  return 0
}

int stringLength(char cstr[])
{
	int i=0;
	while( cstr[i] != '\0' )
		i++;
	return i;
}

void stringCopy(char cstr1[], char cstr2[])
{
	int i;
	for(i=0;i<strlen(cstr2); i++)
	{
		cstr1[i] = cstr2[i];
	}
	cstr1[i] = '\0';

}