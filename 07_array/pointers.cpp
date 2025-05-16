// Pointer- pointer is a variable that holds the address of another variable. we can use pointer to store the address of an array

// int* prepareChaiOrders(int cups) -----> initialize a function with pointer like this it means it will return the address of the array.

// new int[cups]---> this is called dynamic memory allocation because we use are new keyword so it means we are allocating memory on the heap. it will return the address of the array.

// int* chaiOrders---> this is a pointer variable that will hold the address of the array that is returned by the function.

//delete[] chaiOrders; ----> this is used to delete the array that is returned by the function we delete this because we don't need it anymore it is store in the heap so heap memory can't delete itself. we need to use delete keyword.


#include <iostream>
using namespace std;    

int* prepareChaiOrders(int cups){
    int* chaiOrders=new int[cups];
    for (int i=0; i<cups; i++){
        chaiOrders[i]=(i+1)*10;
    }
    return chaiOrders;
}


int main(){
 
    int cups=5;
    int* chaiOrders=prepareChaiOrders(cups);
    for (int i=0; i<cups; i++){
        cout<<"Cups:"<<i+1<<" has "<<chaiOrders[i]<<"ml"<<endl;
    }

    delete[] chaiOrders;
  return 0;
}

