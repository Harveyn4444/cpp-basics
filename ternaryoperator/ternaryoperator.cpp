#include <iostream>
using namespace std;
#include <string>

int main(){
    
    int time = 20;
    if (time < 18) {
        cout << "Good day."<< "\n";
    } else {
        cout << "Good evening." << "\n";
    }

    // INnstead  can be written as 
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << "\n";     
    return 0;

}