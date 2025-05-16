//construcotor--> its a special type method that is automatically called when an object of a class is created.same name as the class.

//default constructor--> it is a constructor that takes no arguments



#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai {
    public:
        string teaName; 
        int servings; 
        vector <string> ingredients;

        //default constructor
        Chai() {
            teaName="unknown";
            servings=1;
            ingredients={"water, tea leaves"};
            cout<<"Constructor called"<<endl;
        }

        void displayChaiDetails() {
            cout<<"Tea name: "<<teaName<<endl;
            cout<<"servings: "<<servings<<endl;
            cout<<"Ingredients: ";

            for (string ingredient : ingredients) {
                cout<<ingredient<<" ";
            }
            cout<<endl;
        }

};

int main()
{
    Chai defaultchai;
    defaultchai.displayChaiDetails();
    return 0;
}