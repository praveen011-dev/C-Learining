
// returntype functionName(parameters){
//     function body
// }

//void --> nothing return (empty)


#include <iostream>
using namespace std;    


//user define function
int checkTemp(int temp){
    return temp;
}

//declaring & defination of function 
void makechai(){
    cout<<"Making chai"<<endl;
}

int main(){ //entry point of the program
    
  int temp = checkTemp(20); //function call
  cout<<"Temperature is: "<<temp<<endl;
   

  makechai();

    return 0;
}
