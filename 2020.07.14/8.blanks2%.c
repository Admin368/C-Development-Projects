#include<stdio.h>
#include<string.h>
//Q : replace or blank spaces with %
int i;
int main(){
int stringlength=0;
char text[100];
char newtext[100];
printf("Please enter input:");
gets(text);
stringlength=strlen(text);
//for(i=0;i<=100;i++){newtext[i]="";}
for(i=0;i<stringlength;i++){
    if(text[i]==9){newtext[i]="f";}//39 = space
    if(text[i]!=9){newtext[i]=text[i];} //else if cond is not considered if is correct to avoide double resconsideration
    //else{newtext[i]=text[i];}
}
newtext[i+1]='\0';
printf("OLD STRING:%s\n",text);
printf("NEW_STRING:%s\n",newtext);
return 0;
}
