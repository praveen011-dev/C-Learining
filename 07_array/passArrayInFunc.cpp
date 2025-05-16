#include <iostream>
using namespace std;    

int totalChaiServed(int chai[],int size){
    int total=0;
    for(int i=0; i<size; i++){
        total+=chai[i];
    }
    return total;
}

int main(){
 int chaiServed[7]={1,2,3,4,5,6,7}; 
 
 int total =totalChaiServed(chaiServed,7);
 cout<<"Total chai served: "<<total<<endl;

  return 0;
}

