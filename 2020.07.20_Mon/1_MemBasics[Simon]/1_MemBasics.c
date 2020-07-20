#include <stdio.h>
#include <stdlib.h>

void myfun(int x);
int main(){
    int x;
    x=18;
    printf("x in the main function before my fun %d\n",x);
    myfun(x);
    printf("x in the main function after my fun %d\n",x);
    return 0;
}
//value of a finction after done its removed
// that is why x looses the value of 9 wen myfun() is done
// my fun in"myfun(x)" only gets a copy of x, not x itself
void myfun(int x){ //the x here is idependent of the one in main
    int sum,y;
    y = 9;
    x=y;
    sum = x +15;
    printf("the value of sum %d\n",sum);
    printf("the value of x in my fun is %d\n",x);
}