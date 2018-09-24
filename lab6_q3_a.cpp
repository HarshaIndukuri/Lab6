#include<iostream>

using namespace std;

//Defining function using value
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

int main() {
//Driver function
int c;

int d;

//Taking input from users for max function
cout<<"Enter the first number. ";
cin>>c;

cout<<endl;

cout<<"Enter the second number. ";
cin>>d;
cout<<endl;

max (c, d);

cout<<endl;
























}
