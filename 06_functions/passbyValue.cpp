//passbyValue --> we pass the copy of the variable to the function not exactly the variable.

#include <iostream>
using namespace std;    

void pourChai(int cups){
    cups=cups+5;
    cout<<"Poured cups:"<<cups<<endl; //7
}

int main(){
    
    int chaiCups=2;
    pourChai(chaiCups);
    cout<<"totalcups"<<chaiCups<<endl;//2
    return 0;
}
