#include <iostream> // used for input and output
#include <bitset> // used for bit manipulation
#include <chrono>   // used for delay
#include <thread>   //used for delay
#include <bitset> // used for binary conversion

int main(){
    const int numPins = 8;
    int pins[numPins] = {2, 3, 4, 5, 6, 7, 8, 9};   //Digital Pins
    int num = 0;
    //Set pins as outputs - will chnage for hardware specific
    // also i dont actually want to do this
    for (int i = 0; i < numPins; i++) { // why ++ after?
        // Initilise pins as outputs
        std::cout << "Setting pin " << pins[i] << " as OUTPUT.\n";  // what is the ::
    }

    //Loop from 0 to 255
    //for( int num = 0; num <=255; ++num){ // Why ++ first?
    while(  num <=255 ) { // Why ++ first?
        // this is me guessing 
        std::cout << "Number: " << num << ".\n";
        std::bitset<8> bits(num);
        std::cout << bits << std::endl;
        
        //output each bit and print the state
        for( int i=0; i < numPins; ++i){
            bool bit = (num >> i) & 1; // What is the & for 
            std::cout << "Pin " << pins[i] << ": " << (bit ? "HIGH" : "LOW") << " " << bit << ".\n";

        }
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        ++num;
    }
    //num = 0; 
    main();
   // return 0;
}