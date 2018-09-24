#include<iostream>

using namespace std;


	int readableReturn (float unitCst, float taxRt, float units) {

	float salesTx, totDue;//Declaring varables as float


	//Taking input from user

	cout<<"Enter the cost of each Unit in rupees. ";
	cin>>unitCst;
	
	cout<<endl;

	cout<<"Enter the tax rate in %. ";
	cin>>taxRt;
	       

	cout<<endl;

	cout<<"Enter the number of units. ";
	cin>>units;
	
	cout<<endl;
	
	
	//Giving output
	cout<<"The cost of each unit is "<<unitCst<<" rupees."<<endl;
	cout<<"The rate of tax is "<<taxRt<<"% ."<<endl;
	cout<<"The number of units are "<<units<<" ."<<endl;


	//calculating sales tax and the total amount
	salesTx = unitCst*(taxRt/100)*units;

	totDue = (unitCst*units) + salesTx;

	
	cout<<"The sales tax is "<<salesTx<<" rupees."<<endl;

	cout<<"the total amount to be payed is "<<totDue<<" rupees."<<endl;


	}





	int main () {

	float a, b , c;

	readableReturn(a, b, c);//Calling the function



	}






