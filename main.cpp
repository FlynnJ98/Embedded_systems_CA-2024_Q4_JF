#include "mbed.h"

// Assign values as per CA

    int a = 10;
    int b = 20;
    int c = 30;

// main() runs in its own thread in the OS
int main()
{ 

// Add values of a & b & store in d
    int d = int (a) + int (b); 
// print the value of d
    printf("The value of Variable d: %d\r\n", int (d));

// Subtract the values of c - d & store in e
    int e = int (c) - int (d);
// print the value of e
    printf("The value of Variable e: %d\r\n", int (e));

return 0;

}

