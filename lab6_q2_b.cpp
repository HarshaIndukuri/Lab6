#include<iostream>

using namespace std;


//defining function by reference

void sumr (int e, int f, int &l) {

l = e+f;
}

int main(){

int x,y;

cout<<"Enter the first number."<<endl;
cin>>x;

cout<<"Enter the second number."<<endl;
cin>>y;

int s;

sumr (x, y, s);

cout<<"The sum is "<<s<<" .";
}
