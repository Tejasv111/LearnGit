#include <stdio.h>

int main(){
    unsigned int a = 60; //0011 1100 (60 in binary ) ,,, originally it is 32 bits which is 0000 0000 0000 0000 0000 0000 0011 1100 which is 4 byte
    unsigned int b = 13; //0000 1101(13 in binary )
    int result = 0;

    result = a & b; // AND operation
    //0000 1100 which is 12 in decimal 
    printf("%d\n",result);

    result = a | b; // OR operation
    //0011 1101 which is 61 in decimal
    printf("%d\n",result);

    result = a ^ b;// XOR operation
    //0011 0001 which is 49 in decimal
    printf("%d\n",result);

    result = ~a;// One's Complement it flips the bits
    //1100 0011
    printf("%d\n",result);

    return 0;

    
}