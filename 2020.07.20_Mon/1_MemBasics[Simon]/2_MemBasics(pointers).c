#include <stdio.h>
#include <stdlib.h>

void myfun(int *x);
int main(){
    int x;
    x=18;
    printf("x in the main function before myfun() %d\n",x);
    myfun(&x);//"& means address of x"
    // we are passing an address to fun
    //& used for already declared varibles to get their address
    printf("x in the main function after myfun() %d\n",x);
    return 0;
}
void myfun(int *x){ // we use a  pointer *x pointer
    // the x in (int *x) is just a format unrelated to The x
    printf("  myfun(){\n");
    int sum,y;
    y = 9;
    print("*x=y");
    *x=y; // the pointer of x will have realvalue of x
    //the pointer is derefencing the address to get the value
    printf("sum=*x+15");
    sum = *x +15;
    // we need to out
    printf("    the value of sum %d\n",sum);
    printf("    the value of x in my fun is %d\n",*x);
    printf("  }\n");
}