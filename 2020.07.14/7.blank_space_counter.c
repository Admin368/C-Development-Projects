#include <stdio.h>
#include <string.h>
#include<conio.h>
//Q: count space and tabs in input text
// tab character is by "\n"
// value of blank character "\0" 
int main(){
char text[100];
int stringlength;
printf("please input some text:");
//scanf("%s", &text);
/*
int ix;
for(ix=0;ix<100;ix++){
    text[ix]=getch();
}
*/
gets(text);
stringlength= strlen(text);
int i;
int tabs=0;
int spaces=0;
for(i=0;i<=stringlength;i++){
    if(text[i]==32){spaces=1+spaces;} //32 == blank space
    if(text[i]==9){tabs=1+tabs;} //9 == tabs
}
printf("\n");
printf("Number of characters:%d\n",stringlength);
printf("Number of tabs   :%d\n",tabs);
printf("Number of spaces :%d\n",spaces); 
return 0;
}