#include <iostream>
using namespace std;    



int main(){
  int chaisales[3][7]={ 
    {50,60,55,70,80,90,64}, //1st row
    {34,32,63,98,74,76,45}, //2nd row
    {23,87,65,45,76,54,34} //3rd row
};


    for (int i=0; i<3; i++){
        cout<<"i am at row "<<i+1<<endl; 
        for(int j=0; j<7; j++){
            cout<<chaisales[i][j]<<" cups"<<endl;
        }
    }

  return 0;
}

