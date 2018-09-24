#include<iostream>

using namespace std;


	int valueReturn (float unitCst, float taxRt, float units) {
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




}






	int main () {
  
	float a, b, c;


	
	valueReturn (a, b ,c);//calling the function

	



}
