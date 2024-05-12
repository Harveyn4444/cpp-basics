#include <iostream>
using namespace std;
#include <string>

int main(){
    
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    return 0;

}