#include <iostream>

using namespace std;

int main(){
    
     int cups;

     cout<<"Enter the number of cups: ";
     cin>>cups;
     
     if(cups>20){
        cout<<"You will have get a Gold Badge" <<endl;
     }

     else if(cups>=10 && cups<=20){
        cout<<"You will have get a Silver Badge"<<endl;
     }
    
     else{
        cout<<"No BADGE"<<endl;
     }
    
    return 0;  

}