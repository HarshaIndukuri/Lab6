#include<iostream>


using namespace std;
//creating the function

int sumSquareEvenNumbers (int firstNum, int secondNum){

int c=firstNum+1;//c starts at the number after firstnum
int x;

while (c>firstNum) {



//condition for even numbers

if (c % 2 == 0){

x = x + c*c;
}

if (c==secondNum-1)

{break;}

c++;




}

cout<<"The sum of all the squares of even numbers between "<<firstNum<<" and "<<secondNum<<" is "<<x<<" ."<<endl;
}














int main() {

int a, b;

cout<<"Enter the first Integer. ";

cin>>a;


cout<<"Enter the second Integer. ";
cin>>b;

sumSquareEvenNumbers (a, b);

}	
