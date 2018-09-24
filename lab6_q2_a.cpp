#include<iostream>

using namespace std;

//defining function by value
int sum (int a, int b) {

cout<<"The sum is "<<a+b<<" ."<<endl;
}



int main() {//Driver function 

int c;
int d;
//Asking user for input
cout<<"Enter the first number."<<endl;
cin>>c;

cout<<"Enter the second number."<<endl;
cin>>d;

sum (c, d) ;//Calling the function

int x;
int y;




return 0;

}


