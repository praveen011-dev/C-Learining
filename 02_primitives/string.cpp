#include <iostream>
#include <string> // Include string library

using namespace std;

int main(){
    string favoriteTea = "Lemon Tea \t"; //using escape sequence
    string description = "Known as \"best\" tea"; //using escape character

    cout << favoriteTea << description << endl;

    return 0;
}