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
  int ID;
  string firstname;
  string lastname;
  int salary;
  string department;
  int day;
  int year;
  string month;
};

int makeEmployeeRecord(EmployeeRecord []);

void printEmployeeRecord(EmployeeRecord emp);

void findDepartment(EmployeeRecord[], int);

void salaryEmployee(EmployeeRecord[], int);

int main()
{
  int numOfRecords = 0;
  EmployeeRecord nr[MAXSIZE]; // Call makeEmployeeRecord and printEmployeeRecord

  numOfRecords = makeEmployeeRecord(nr);
  printEmployeeRecord(nr, numOfRecords);

}

int makeEmployeeRecord(EmployeeRecord nr[])
{
  int count = 0;
  string readline;
  ifstream ifso;
  
}