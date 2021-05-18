/* [1] Create the strucutre for the information about an Employee.
     We are going to declare the structure for the Employee record. The record contains a couple of personal information for an employee such as 
     ID: 6 digits numeric value
     Name: First and last name. (Two Words)
     Salary: Annual Salary (0 - 500,000)
     Department name: The department that the employee works for (one word)
     Date: The date which the employee starts to work in this company (Mon Day Year)
    
    The data type for each member data of structure can be declared with the built-data type or userdefined another structure. The design of the structure depends
    on the programmer/

    [2] Create the text file for the employee information

    The textfile "employee.txt" contains the individual personal information for the structure Employee. Each line contains all data for an employee structure thaat has been created
    in [1]. For example, 

    123456 John Doe 140000 Computer Jan 31 2020

    [3] Make a function that constructs the structure array to store them

    [4] Make functions that find a particular employee with some conditons
    Find the employee that has a salary greater than 100,000
    Find the employee that works in the "Computer" department
  */
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

const int MAXSIZE =  1000;

struct EmployeeRecord{
  int Id;
  string name;
  int salary;
  string department;
  string date;
  int count;
};

int makeEmployeeRecord(EmployeeRecord []);
void printEmployeeRecord(EmployeeRecord nr);

void getdepartmentname(EmployeeRecord nr);
string getname(string);
int getsalary(string);
string getdate(string);
int getId(string);

int main()
{
  int numOfRecords = 0;
  EmployeeRecord nr[MAXSIZE]; // Call makeEmployeeRecord and printEmployeeRecord

  numOfRecords = makeEmployeeRecord(nr);
  cout << "ID \t Name\t Salary\t\t Department\t\t Date\t\t" <<endl;
  for (int i = 0; i <numOfRecords; i++)
  {
    printEmployeeRecord(nr[i]);
  }

}

int makeEmployeeRecord(EmployeeRecord nr[])
{
  int count = 0;
  string readline;
  ifstream ifso;

  ifso.open("employee.txt");
  if (!ifso) {
    cout << "File Open Error \n";
    exit(0);

  }

  while ((ifso >> readline) && (count < 1000)) {
    nr[count].Id = getId(readline);
    nr[count].name = getname(readline);
    nr[count].salary = getsalary(readline);
    nr[count].date = getdate(readline);
    count++;
  }
  return count;

}

void printEmployeeRecord(EmployeeRecord nr[], int numOfRecords)
{
  for (int i = 0; i < numOfRecords; i++)
  {
  cout << nr[i].Id << "\t";
  cout << nr[i].name << "\t";
  cout << nr[i].salary << "\t";
  cout << nr[i].department << "\t";
  cout << nr[i].date << "\t";
  cout << nr[i].count << endl;
  }

}

void getdepartmentname(EmployeeRecord nr[], int num)
{
  int startpos, pos, endpos;
  startpos = 0;
  for (int i = 0; i < 3; i++)
  {
    pos = str.find(',', startpos);
    startpos = pos+1;
    if (nr[i].department == "Computer")
    {
      printEmployeeRecord(nr[i]);
    }
  }
  endpos = str.find(',', startpos);
  return str.substr(startpos, endpos-startpos);
}

string getname(string str)
{
  int pos = str.find(',');
  reeturn str.substr(pos+1, 1);
}

int getId(string str)
{
  return str.substr(0,5);
}

string getdate(string str)
{
  int startpos, pos, endpos;
  startpos = 0;
  for (int i = 0; i < 4; i++)
  {
    pos = str.find(',',startpos);
    startpos = pos+1;
  }
  endpos = str.find(',',startpos);
  return str.substr(startpos, endpos-startpos);
}

int getsalary(string str)
{
  int startpos, pos, endpos;
 startpos = 0;
  for (int i = 0; i < 2; i++)
  {
    pos = str.find(',',startpos);
    startpos = pos+1;
  }
  endpos = str.find(',',startpos);
  return str.substr(startpos, endpos-startpos);
}