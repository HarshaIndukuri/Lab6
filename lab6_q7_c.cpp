#include<iostream>

using namespace std;


char toUpper(char x){
   
   x=x-32;
   cout<<"Your character in uppercase is:"<<x<<endl;
   
}



char toLower(char x){
   
   x=x+32;
   cout<<"Your character in lowercase is:"<<x<<endl;
   
}



int main () {

char a;

cout<<"Enter a character. ";
cin>>a;

if (a>=97){

toUpper(a);
}


else 

toLower(a);


}
