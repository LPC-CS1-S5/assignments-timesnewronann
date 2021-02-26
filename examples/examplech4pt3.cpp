#include <iostream>
using namespace std;

int main(){
int num1, num2, num3, min;

cout <<"Enter 3 different numbers: " << endl;
cin>> num1 >> num2>> num3; 

// compare the numbers 


if(num1 < num2){
  min = num1;
}else{
  min = num2;
}
if(num3 < min){
  min = num3;
}
cout<< "the smallest number is: "<< min << endl; 

}