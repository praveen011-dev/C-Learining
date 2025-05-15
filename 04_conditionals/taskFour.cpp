#include <iostream>
using namespace std;    

int main(){
   
    int teaType;
    double price;

    cout<<"Select your Tea"<<endl;
    cout<<"1. Green Tea"<<endl;
    cout<<"2. Black Tea"<<endl;
    cout<<"3. Lemon Tea"<<endl;
    cout<<"4. Oolong Tea"<<endl;
    cout<<"5. Herbal Tea"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>teaType;

    switch(teaType){
        case 1:
            price=2.5;
            cout<<"Your order is Green Tea"<<price<<endl;
            break;
        case 2:
            price=3.0;
            cout<<"Your order is Black Tea"<<price<<endl;
            break;
        case 3:
            price=1.5;
            cout<<"Your order is Lemon Tea"<<price<<endl;
            break;
        case 4:
            price=4.5;
            cout<<"Your order is Oolong Tea"<<price<<endl;
            break;
        case 5:
            price=5.0;
            cout<<"Your order is Herbal Tea"<<price<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
    }

    return 0;
}