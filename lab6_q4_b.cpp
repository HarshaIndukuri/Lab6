#include<iostream>

using namespace std;

//Defining void function by reference
void minr(int e, int f, int &g) {

if (e<f){
g = e;
}

else 
g = f;

}

int main(){

int x;

int y;

int z;

//Taking input from users for maxr function
cout<<"Enter the first number. ";
cin>>x;

cout<<endl;

cout<<"Enter the second number. ";
cin>>y;
cout<<endl;

minr(x, y, z);

cout<<"The smaller number is "<<z<<" .";
cout<<endl;

}
