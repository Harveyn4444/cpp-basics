#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t input){
    uint8_t i = (1 << (sizeof(input)*8-1));
    for (; i; i >>= 1) {    
        printf("%d", (input&i)!=0);
    }
    //printf("\n");
}

int main() {
    uint8_t x,y,z;
    x = 0b11101001; // 0b means this number is binary *after the 0b.....
    y = 0b10010110;
    printf("x = ");print_binary(x);printf("\n");
    printf("y = ");print_binary(y);printf("\n");
    printf("\n");

    // the bitwise operations
    //AND
    z = x & y; // AND logic gate breaks bits into pairs, and if the bits are 11 or 00 positionally in x and y then the output is 1, if not is 0 

    printf("AND bitwise operator: \n");
    printf("Binary: ");print_binary(z);printf(" Hex: ");printf("%x", z);printf(" Decimal:");printf("%d", z);printf("\n");
    printf("\n");
    //OR
    z = x | y; //OR logic gate if one of the values in each posiiton is 1 the output is 1
               // so the output would be 11111111
    printf("OR bitwise operator: \n");
    printf("Binary: ");print_binary(z);printf(" Hex: ");printf("%x", z);printf(" Decimal:");printf("%d", z);printf("\n");
    printf("\n");
    //one's Compliment
    z = ~x; //One's Compliment logic gate inverts the 1s and 0s
               // so the output of x would be 00010110 
    printf("One's Compliment bitwise operator: \n");
    printf("Binary: ");print_binary(z);printf(" Hex: ");printf("%x", z);printf(" Decimal:");printf("%d", z);printf("\n");
    printf("\n");
    //XOR
    z = x ^ y; //XOR logic gate 1^0 = 1, 0^1 = 1, 1^1 = 0, 0^0 = 0;
               // so the output would be 0111111
    printf("XOR bitwise operator: \n");
    printf("Binary: ");print_binary(z);printf(" Hex: ");printf("%x", z);printf(" Decimal:");printf("%d", z);printf("\n");
    printf("\n");
    //Right Shift
    z = x >> 1; //Right shift 1 bit, shifting all the bits to the right, remove the LSB and add 0 infront to become the MSB
               // so the output would be 11101001 to 01110100
    printf("Right shift bitwise operator: \n");
    printf("Binary: ");print_binary(z);printf(" Hex: ");printf("%x", z);printf(" Decimal:");printf("%d", z);printf("\n");
    printf("\n");
    //Left Shift
    z = x << 2; //Left shift 2 bits, shifting all the bits to the left, adding two (x) 0s as the LSB and reoving the 2 most significant bits
               // so the output would be 11101001 to 10100100
    printf("Left shift bitwise operator: \n");
    printf("Binary: ");print_binary(z);printf(" Hex: ");printf("%x", z);printf(" Decimal:");printf("%d", z);printf("\n");
    printf("\n");

    return 0;
}