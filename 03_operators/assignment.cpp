#include <iostream>

using namespace std;

int main(){ 

    int teaBags;
    cout<<"Enter the number of tea bags: ";
    cin>>teaBags; 
    
    if(teaBags<10){
        // teaBags=teaBags+5;
        teaBags+=5;
    }
    cout<<"Your Total Tea bags: "<<teaBags<<endl;

    return 0;
}