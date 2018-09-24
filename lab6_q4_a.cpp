#include<iostream>

using namespace std;

//Defining function using value
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

min (c, d);

cout<<endl;








}
