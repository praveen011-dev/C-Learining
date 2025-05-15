//passbyRefrence --> pass the variable address to the function use & in the parameter of the function.

#include <iostream>
using namespace std;    

void pourChai(int &cups){
    cups=cups+5;
    cout<<"Poured cups:"<<cups<<endl; //7
}

int main(){
    
    int chaiCups=2;
    pourChai(chaiCups);
    cout<<"totalcups"<<chaiCups<<endl;//7
    return 0;
}
