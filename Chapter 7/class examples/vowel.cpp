#include <iostream>
#include <cstring>
using namespace std;

int main()


{

	char 	name[] = "programming";
	char 	vowels[] = "aeiou";

	for(int i=0; i<strlen(name); i++) // 11
	{
		for(int j=0; j<strlen(vowels); j++ )
    {    
      if (name[i] == vowels[j])
      {
			  cout << "Found the vowel " << vowels[j] << " at the index " << i << endl;
      }
		}
	}

}
  
	
	

