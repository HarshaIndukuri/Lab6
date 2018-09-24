#include<iostream>

using namespace std;



	int calcReturn (float unitCst, float taxRt, float units) {
	
	float salesTx, totDue;
	
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


	salesTx = unitCst*(taxRt/100)*units;

	totDue = (unitCst*units) + salesTx;


	cout<<"The sales tax is "<<salesTx<<" rupees."<<endl;

	cout<<"the total amount to be payed is "<<totDue<<" rupees."<<endl;

	}



	int main () {


	float a, b, c;

	calcReturn (a, b, c);


	}







