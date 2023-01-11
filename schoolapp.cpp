#include <iostream>

using namespace std;


int main(){

string username;
string password;
string cpassword;


cout <<"Enter your username: " <<endl;
cin>>username;


cout <<"Enter your password: " <<endl;
cin>>password;

cout<<"Confirm your password: " <<endl;
cin>>cpassword;


if(password==cpassword){
    cout <<"You are welcome" << username <<" proceed to login..." <<endl;
}
else{
    cout <<" Sorry. Passwords don't match!";
}



return 0;

}