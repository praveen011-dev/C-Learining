//lambdaFunction --> a function without name 

#include <iostream>
using namespace std;    

int main(){
    
    //lambda function
   auto prepareChai= [](int cups){
        cout<<"Preparing "<<cups<<" cups of chai"<<endl;
    };

    prepareChai(5);

    return 0;
}
