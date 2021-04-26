// array insertion
#include	<iostream>
#include	<iomanip>
using 	namespace	std;

void	insertone(int [], int &, int);
void	deleteone(int [], int &, int);
void	printout(int [], int);


int 	main()
{
	const	int SIZE=100;
	int 	usernum;
	int 	length=10;
	int 	i, pos;
	int 	number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};

	cout << "Before inserting \n";
	printout(number, length);

	cout << "Enter the number to insert\n";
	cin	>> usernum;
	insertone(number, length, usernum);
	cout << "After inserting \n";
	printout(number, length);

	cout << "Enter the number to delete\n";
	cin	>> usernum;
	deleteone(number, length, usernum);
	cout << "After deletion \n";
	printout(number, length);
}
void deleteone(int number[], int &length, int usernum)
{
	int i,pos;

	for(i=0; i<length; i++)
	{
		if ( number[i] == usernum) // usernum = 7
			break;
	} // i == length
	pos = i;
	if ( pos == length)
		cout << " Not found : " << usernum << endl;
	else 
	{
		for(i=pos+1; i<length; i++)
			number[i-1] = number[i];
		length -= 1;
	}

}
void insertone(int number[], int &length, int usernum)
{
	int i, pos;
	
	for(i=0; i<length; i++)
	{
		if ( number[i] > usernum)
			break;
	}
	pos = i;
	for(i=length-1; i>=pos; i--)
		number[i+1] = number[i];
	number[ pos ] = usernum;
	length += 1;

}

void	printout(int number[], int last)
{
	for(int i=0;i<last; i++)
		cout << setw(5) << number[i] ;
	cout << endl;
}