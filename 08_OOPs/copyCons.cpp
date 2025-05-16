//prameter constructor --> its a constructor that takes arguments same name as the class and is called when an object of a class is created.



#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai {
    public:
        string teaName; 
        int servings; 
        vector <string> ingredients;

        //parameter constructor
        Chai(string name, int serve, vector <string> ingr) {
            teaName=name;
            servings=serve;
            ingredients=ingr;
            cout<<"Parameter Constructor called"<<endl;
        }


        //Copy Constructor
        Chai(Chai &obj) {
            teaName=obj.teaName;
            servings=obj.servings;
            ingredients=obj.ingredients;
            cout<<"Copy Constructor called"<<endl;
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
    Chai lemonchai("lemon chai",2,{"lemon","tea leaves"});
    lemonchai.displayChaiDetails();

    //copy the object 

    Chai copiedchai(lemonchai); //copy constructor
    copiedchai.displayChaiDetails();

    // change the original object
    lemonchai.teaName="Green Tea";

    cout<<"Lemonchai"<<endl;
    lemonchai.displayChaiDetails();
    cout<<"copiedchai"<<endl;
    copiedchai.displayChaiDetails();


    //if string tea name is pointer variable so what will happen? --> see destructor.cpp file.
    

    return 0;
}