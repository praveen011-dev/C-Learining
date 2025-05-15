#include <iostream>
#include <string>

using namespace std;

int main(){
    string TeaOrder;

    cout << "What would you like to order in tea? <<endl";
    getline(cin, TeaOrder);

    if(TeaOrder=="Green Tea"){
        cout << "Your order is " << TeaOrder << endl;
    }


    return 0;
}