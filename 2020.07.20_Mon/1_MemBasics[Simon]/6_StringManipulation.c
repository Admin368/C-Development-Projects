#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char myString[100] = {"hello string"};
    char *myString2 = {"hello string"};
    int myInt[10]={10,45,85,23,89};
    printf("the value 3nd character is %d\n",*(myInt+2));
    printf("the length of the character :%d\n",strlen(myString));
    //strcat(destination,2ndString)
    //make sure the destination array has enough space
    //to accomodate both strings combined, or u will suffer
    strcat(myString,myString2);//brings two strings together
    //it removes the "\0" character
    printf("newString:%s\n",myString);
    //strncat(destination,source,number of character to copy from sourse);
    strncat(myString,myString2,2);
    printf("newString2:%s\n",myString);
    char initial[10]={"Mr."};
    char name[100]={"Paulo"};
    char fullname[100];
    strcpy(fullname,initial);
    strcat(fullname,name);
    printf("fullname:%s\n",fullname);

    //strcpy(destination,source)
    //source can be array or actual string
    strcpy(myString,"/-/-/-/-/");
    printf("newString:%s\n",myString);
    //strncpt(destination,source,#ofChar2copy)
    strncpy(myString,myString2,2);
    printf("newString:%s\n",myString);
    //strcmp = sting compare
    //it returns zero if string thre same
    //it is case sensitive
    char Name1[]={"paulo"};
    char Name2[]={"paulo"};
    if(strcmp(Name1,Name2)==0){

    }
    //STRXFRM copies s2 in the middle of s1
    //strxfrm(s1,s2,x);

    //STRCHR searches for 1st occurence of character
    
    //STRTOK s1= source , s2 = token of separators
    char data[]={"Paul @is #a $programer"};
    const char token[]={"@#$"};
    printf("%s",data);
    puts(data); //puts prints but without formating
    char *pt;
    pt = strtok(data,token);//initial call
    while(pt){//quits on NULL
        puts(pt);//shows token
        pt = strtok(NULL, token);//next token
        //Null is taken as first argument
        //its stated to e unsual usage
    }
    return 0;
}
