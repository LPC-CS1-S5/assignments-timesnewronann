/*In this program, if the given word is even a sub-string of the original word, we will count it.

For example, the given word is "some" and the original word is "something", we will count it as a word occurrence.
If the given word occurs several times in an original word, we will count all occurrences.

For example, the given is "ch" and the original word is "church", we will count it as 2 occurrences.
In your main function, we will call a function to find the occurrences and then receive the total occurrences from that function, and then the returned result will be printed in the main function*/
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

bool compare(int, string, string); // bool because we will compare the int vs words 

int main()
{
  int exact = 0;
  string userinput; 
  string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

    cout << "Enter user string "; 
    cin >> userinput;
    

}

bool compare(int exact, string userinput, string words)
{
  int pos = 0, i = 0;

  while ( pos != -1)
  {
    pos = words.find(userinput, i);
    cout << "Found at: " << pos+1 
  }
}