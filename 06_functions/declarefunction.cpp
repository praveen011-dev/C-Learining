#include <iostream>
using namespace std;    

//declaring function
void serveChai( int cups ); 

int main(){
       
  serveChai(5);//calling function

    return 0;
}

//function definition
 void serveChai(int cups){
    cout<<"Serving "<<cups<<" cups of chai"<<endl;
  }