#include <iostream>
using namespace std;    

int main(){
    int cups;

    double pricePerCup=2.5,totalPrice,discountedPrice;

    cout << "Enter the number of cups: ";
    cin >> cups;

    totalPrice=cups*pricePerCup;

   if(cups>20){
    discountedPrice=0.20;

   }
   else if(cups>10 && cups<=20){
    discountedPrice=0.10;
   }
   else{
    discountedPrice=0;
   }  

   totalPrice-=(totalPrice*discountedPrice);
   cout<<"Total price after discount: "<<totalPrice<<endl;
    
    return 0;
}