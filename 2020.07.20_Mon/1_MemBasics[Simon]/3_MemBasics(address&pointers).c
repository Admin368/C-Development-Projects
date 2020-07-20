#include <stdio.h>
#include <stdlib.h>

void myfun(int *x);
int main(){
    /*if we wanted to change the value of x using a pointer
    it wuld be illigal just to say
    &x = 123; we wuld be asking x to change address
    &x is the address of variable x
    to to dereference and get the value on address &x
    a pointer only takes an address"&x"
    a pointer is a reference to variable
    we need to used pointer coz 
    */
    int x;
    int *x_pointer;
    x_pointer = &h;
    x=18;
    return 0;
}
