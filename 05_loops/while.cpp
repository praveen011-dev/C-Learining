#include <iostream>
using namespace std;    

int main(){
    
    int teaCups;

    cout<<"Enter the number of cups of tea to serve: ";
    cin>>teaCups;

    //While loop

    while(teaCups>0){

        cout<<"Serving a cup of tea"<<endl;
        teaCups--;
        cout<<"remaining cups of tea: "<<teaCups<<endl;

    }

    cout<<"all teas are served"<<endl;

    return 0;
}