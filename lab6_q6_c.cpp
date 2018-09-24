#include<iostream>


using namespace std;
//creating the function

int sumSquareOddNumbers (int firstNum, int secondNum){

int c=firstNum+1;//c starts at the number after firstnum
int x;

while (c>firstNum) {



//condition for odd numbers

if (c % 2 == 1){

x = x + c*c;
}

if (c==secondNum-1)

{break;}

c++;




}

cout<<"The sum of all the squares of odd numbers between "<<firstNum<<" and "<<secondNum<<" is "<<x<<" ."<<endl;
}














int main() {

int a, b;

cout<<"Enter the first Integer. ";

cin>>a;


cout<<"Enter the second Integer. ";
cin>>b;

sumSquareOddNumbers (a, b);

}	
