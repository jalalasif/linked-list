#include <stdio.h>

int main () {

    int x = 42; // normal variable storing a value of 42.
    int *p = &x; // a pointer p that holds the memory address of x.

    printf("Value of x is: %d\n", x); // prints just 42
    printf("Value of the address of x via its ponter is: %p\n", &x); // prints &x which refers to the memory address of x, which is where the pointer points to
    printf("%p\n", p);  // same as &x, this is where p points to, not the value that p points to, but the memory location p points to
    printf("Value pointed to by p: %d", *p); // since we're formatting it out to %d, we get the value that the pointer p points to as recorded in memory

    

    return 0;
}