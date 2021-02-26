// Write a program that asks the user for the number of males and the number of females registered in a class. The program should display the percentage of males and females in the class.


//Hint:
//Suppose there are 8 males and 12 females in a class. There are 20 students in the class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60%.

#include <iostream>
using namespace std;

int main()
{
    double males;
    double females;
    
                           
    cout << "How many males and females are in the class?" << endl;
    cin >> males;
    cin >> females;
    
    double studentTotals = males + females;
    
    double percentageMales = (males / studentTotals)* 100 ;
    double percentageFemales = (females / studentTotals) * 100;
    // showpoint , setw(10) 
    cout << showpoint<< setprecision(2) <<setw(10) << fixed<<  "The percentage of males is " << percentageMales << " % " << endl;
    cout << "The percentage of females is " << percentageFemales << "%" << endl;
    return 0;

}