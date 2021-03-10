#include <iostream> 
#include <cstdlib> 
#include <fstream>

using namespace std;

int main()
{
  ofstream ofs;
  int employees;
  int ID;
  string name;
  string department;
  double salary;

  cout << "How many employees: " << endl;
  cin >> employees; 
  cout << employees;

  ofs.open("employee.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error";
    exit(0);
  }
  ofs << employees << endl;
  
for (int i = 0; i < employees; i ++)
{
	cout << "Enter your Employee ID: " << endl;
	cin >> ID;
	ofs << ID << " ";

	cout << "What is your name: " << endl;
	cin >> name;
	ofs << name << " ";

	cout << "What department do you work in: " << endl;
	cin >> department;
	ofs << department << " ";

	cout << "What is your salary: " << endl;
	cin >> salary;
	ofs << salary;

	ofs << endl;
}
  ofs.close();

}