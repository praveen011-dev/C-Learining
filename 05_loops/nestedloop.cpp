#include <iostream>
#include <string>
using namespace std;    

int main(){
    
   string teaTypes[3]={"Green Tea","Black Tea","Lemon Tea"};

   for(int i=0; i<3; i++){
           
        cout<<"Brewing a cup of tea"<<teaTypes[i]<<endl;
       
        for(int j=0; j<3; j++){
            cout<<"Brewing"<< j <<"cup of tea"<<teaTypes[i]<<endl;
        }
   } 
   

    return 0;
}