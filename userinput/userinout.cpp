#include <iostream>
using namespace std;

int main(){
double x,y; 
double sum;
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Type another number:";
cin >> y;
sum = x + y;
cout << "The sum is: " << sum; // Display the input value 

return 0;
}