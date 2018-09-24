#include<iostream>

using namespace std;


int sumEvenNumbers (int firstNum, int secondNum) {

int c;
int x;

for (c=firstNum+1; c<=secondNum; c++) {

if (c % 2 == 0) {

x = x+c;
}


}

cout<<"The sum of all the even numbers between "<<firstNum<<" and "<<secondNum<<" is "<<x<<" ."<<endl;
}






int main() {

int a, b;

cout<<"Enter the first Integer. ";

cin>>a;


cout<<"Enter the second Integer. ";
cin>>b;


sumEvenNumbers(a, b);


}
