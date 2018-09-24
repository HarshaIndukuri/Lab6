#include<iostream>

using namespace std;

//Max function
int max(int a, int b){

if (a>b){

cout<<"The larger number is "<<a<<" .";
}


if (b>a){
cout<<"The larger number is "<<b<<" .";
}

if (a == b){
cout<<"The two numbers are equal. ";
}

}



//Min function

int min(int a, int b){

if (a<b){

cout<<"The smaller number is "<<a<<" .";
}


else if (b<a){
cout<<"The smaller number is "<<b<<" .";
}

if (a == b){
cout<<"The two numbers are equal. ";
}

}


//Sum function

int sum (int a, int b) {

cout<<"The sum is "<<a+b<<" ."<<endl;
}






//driver function
int main() {

//Asking the numbers from the user

cout<<"Enter the first number. "<<endl;

int c;
int d;
int l;
cin>>c;

cout<<"Enter the second number. "<<endl;
cin>>d;

//Asking user what he wants to do

cout<<"What do you want to do with these numbers? "<<endl<<endl;

cout<<"1.Maximum of the two numbers    2.Minimum of the two numbers    3.Sum of the two numbers "<<endl;

cout<<"Enter 1,2 or 3 ";

cout<<endl;

cin>>l;





cout<<endl;

if (l==1){

max(c, d);
}

 
if (l==2) {

min(c, d);
}


if (l==3) {

sum(c, d);
}

cout<<endl;

}




