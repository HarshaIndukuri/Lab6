#include <iostream>



using namespace std;

char toLower(char x){
   
   x=x+32;
   cout<<"Your character in lowercase is:"<<x<<endl;
   
}





int main() {

char a;

cout<<"Enter an uppercase letter. ";

cin>>a;

cout<<endl;

toLower(a);


}
