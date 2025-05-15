// function overlaoding --> same function name but different parameters


#include <iostream>
using namespace std;    

// function 01
void makechai(string chai){
    cout<<"Making chai"<<endl;
}

// function 02
void makechai(int cups){
    cout<<"Making "<<cups<<" cups of chai"<<endl;
}

int main(){
    
  makechai("Black chai");// function 01 call
  makechai(3);// function 02 call
//   makechai();// showing error

    return 0;
}
