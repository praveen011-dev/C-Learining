#include <iostream>

using namespace std;

int main(){    
    int cups;
    double pricePerCup,totalPrice,discountedPrice;

    cout << "Enter the number of cups: ";
    cin >> cups;

    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

//apply 5% discount if total price is greater than 100 

    if(totalPrice > 100){
        discountedPrice = totalPrice-(totalPrice * 0.05); 
        cout << "Discounted price: " << discountedPrice << endl;
    }
    else{
    cout << "Total price: " << totalPrice << endl;

    }


    return 0;
}