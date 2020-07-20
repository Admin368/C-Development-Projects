#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //the name of the array itself is the address to the first address in the array
    int myInt[10]={10,45,85,23,89};
    printf("%1d",*(myInt+2));
    return 0;
}
