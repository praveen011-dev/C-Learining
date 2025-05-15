#include <iostream>
using namespace std;    

int main(){
    
    int TeaCups;

    cout<<"Enter the number of cups of tea to serve: ";
    cin>>TeaCups;
    

    // For Loop

    for(int i=0; i<TeaCups; i++){
        cout<<"Brewing a cup of tea"<<i <<endl;
    }

    cout<<"all teas are Brewed"<<endl;
   
   

    return 0;
}