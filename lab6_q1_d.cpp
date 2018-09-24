#include<iostream>

using namespace std;


	int valueReturn (float& unitCst, float& taxRt, float& units) {
	
	//Taking input from user
	cout<<"Enter the cost of each Unit in rupees. ";
	cin>>unitCst;
		

	cout<<endl;

	cout<<"Enter the tax rate in %. ";
	cin>>taxRt;
	       

	cout<<endl;

	cout<<"Enter the number of units. ";
	cin>>units;
	
	return (unitCst);
	
	return (taxRt);	

	return (units);

	cout<<endl;
	cout<<endl;


}

	int calcReturn (float& unitCst, float& taxRt, float& units) {
	
	float salesTx, totDue;
	
	//Taking input from user

	

	//calculating sales tax and the total amount
	salesTx = unitCst*(taxRt/100)*units;

	totDue = (unitCst*units) + salesTx;

	
	return (salesTx);
	

	}








	int main () {


	float unitCost, taxRt, unitsPurch, salesTx, totDue;//declaring required variables
	

	valueReturn (unitCost, taxRt ,unitsPurch); //calling first function
	
	cout<<"The cost of each unit is "<<unitCost<<" rupees."<<endl;
	cout<<"The rate of tax is "<<taxRt<<"% ."<<endl;
	cout<<"The number of units are "<<unitsPurch<<" ."<<endl;


	salesTx = calcReturn (unitCost, taxRt, unitsPurch);//giving value of sales tax

	totDue = (unitCost*unitsPurch) + salesTx;//finding total due

	cout<<"Sales tax is "<<salesTx<<endl;
	cout<<"Total due is "<<totDue<<endl;

	

	
	}




	

