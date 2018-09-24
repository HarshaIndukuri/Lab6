#include<iostream>


using namespace std;

int sumEvenNumbers (int firstNum, int secondNum) {

int c;
int y;

for (c=firstNum+1; c<=secondNum; c++) {

if (c % 2 == 0) {

y = y+c;
}


}

return (y);
}


int sumOddNumbers (int firstNum, int secondNum) {

int c;
int x;

for (c=firstNum+1; c<secondNum; c++) {

if (c % 2 == 1) {

x = x+c;
}


}

return (x);
}


int sumSquareOddNumbers (int firstNum, int secondNum){

int c=firstNum+1;//c starts at the number after firstnum
int z;

while (c>firstNum) {



//condition for odd numbers

if (c % 2 == 1){

z = z + c*c;
}

if (c==secondNum-1)

{break;}

c++;




}

return (z);
}


int sumSquareEvenNumbers (int firstNum, int secondNum){

int c=firstNum+1;//c starts at the number after firstnum
int s;

while (c>firstNum) {



//condition for even numbers

if (c % 2 == 0){

s = s + c*c;
}

if (c==secondNum-1)

{break;}

c++;




}

return (s);
}



int main () {

int a,b;

cout<<"Enter your first number."<<endl;
cin>>a;

cout<<"Enter your second number."<<endl;
cin>>b;

int sumEven, sumOdd, sumSquareOdd, sumSquareEven;

sumEven = sumEvenNumbers(a, b);
sumOdd = sumOddNumbers(a, b);
sumSquareEven = sumSquareEvenNumbers(a, b);
sumSquareOdd = sumSquareOddNumbers(a, b);


cout<<endl<<endl;

cout<<sumEven<<endl;
cout<<sumOdd<<endl;
cout<<sumSquareEven<<endl;
cout<<sumSquareOdd<<endl;



}
















