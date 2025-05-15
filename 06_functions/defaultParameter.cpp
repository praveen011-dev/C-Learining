//default parameter--> when we don't pass any argument to the function but it has a default value


#include <iostream>
using namespace std;    

// function 01
void makechai(string chai="Green tea"){
    cout<<"Making chai"<<endl;
}

// function 02
void makechai(int cups){
    cout<<"Making "<<cups<<" cups of chai"<<endl;
}

int main(){
    
  makechai();// function 01 call becuase it has a default value

    return 0;
}
