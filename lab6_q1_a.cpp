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

	cout<<endl<<endl;
	
	
	




}






	int main () {
  
	float a, b, c;


	
	valueReturn (a, b ,c);//calling the function

	//Giving output
	cout<<"The cost of each unit is "<<a<<" rupees."<<endl;
	cout<<"The rate of tax is "<<b<<"% ."<<endl;
	cout<<"The number of units are "<<c<<" ."<<endl;


	



}
