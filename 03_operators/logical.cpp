#include <iostream>

using namespace std;

int main(){

bool isStudent;
int cups;

cout<<"Are you a student? (1 for yes, 0 for no):";
cin>>isStudent;

cout<<"how many cups of tea you purchased";
cin>>cups;

if(isStudent || cups>15){
    cout<<"You are a eligible for discount"<<endl;
}
else{
    cout<<"You are not eligible for discount "<<endl;
}

return 0;

}