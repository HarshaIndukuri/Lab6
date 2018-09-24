#include <iostream>



using namespace std;

char toUpper(char x){
   
   x=x-32;
   cout<<"Your character in uppercase is:"<<x<<endl;
   
}





int main() {

char a;

cout<<"Enter a lowercase letter. ";

cin>>a;

cout<<endl;

toUpper(a);


}
