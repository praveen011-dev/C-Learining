#include <iostream>
#include <string>
using namespace std;    

int main(){
    
    string response;

    while(true){
        cout<<"Do you want more tea (yes/'stop' to exit)        "<<endl;
        cin>>response;
        if(response=="stop"){
            //exit the loop
            break;
        }

        cout<<"here is your anothe cup of tea"<<endl;
    }

    cout<<"No more teas will be served"<<endl;
    

  
   

    return 0;
}