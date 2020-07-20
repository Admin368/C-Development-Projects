#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /*
    STRING HANDLING FUNCTIONS
    memchar
    memmove
    strcat
    strncat-concatinates string to end of another
    strcoll
    strlen
    */
   //a character array is a pointer to here those characters are sent
   char *myString = {"hello string"};//declaring array with pointer
   printf("%s\n",mystring);//print the characters in address of *mystring
   printf("%c",myString[0]);prints// character in array index
   printf("%c\n",*(myString+2));//you are printing the value at address mysting + 2 adress spaces
    return 0;
}
