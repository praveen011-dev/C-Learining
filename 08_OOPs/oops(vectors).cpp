// vector class is a class template for sequence containers. A vector stores elements of a given type in a linear arrangement, and allows fast random access to any element in the sequence.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai {
    public:
        //data members (attributes)
        string teaName; //name of tea
        int servings; //no of servings
        vector <string> ingredients; // list of ingredients

        //methods (functions) (member functions)
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
    Chai chaiOne; //object of chai class

    chaiOne.teaName="Green Tea";
    chaiOne.servings=2;
    chaiOne.ingredients={"Tea Leaves","Water"};
    chaiOne.displayChaiDetails();

    Chai chaiTwo; //object of chai class

    chaiTwo.teaName="Masala Tea";
    chaiTwo.servings=2;
    chaiTwo.ingredients={"Tea Leaves","Water","Sugar"};
    chaiTwo.displayChaiDetails();

    return 0;
}