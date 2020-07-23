#include <stdio.h>
char hex[5]={"Oxfe"};
char dec;
int main(){
    printf("Enter The Hex Input\n");
    printf("----Format:Oxfe------\n");
    //gets(hex);//gets input into hex array
    char x = hex[2];
    char y = hex[3];
    char f = 'f';
    printf("F = %c %d\n",f,f);
    f = f+f;
    printf("f+f= %c %d\n",f,f);
    printf("X = %c %d\n",x,x);
    printf("Y = %c %d\n",y,y);
    dec = (x*16)+y;
    //dec =(hex[2]*16)+(hex[3]*1);//converst hex to dec
    printf("---------------------\n");
    printf("Hex_Input:%s\n",hex);
    printf("Dec_Output:%d\n",dec);
    printf("Hex(%s) = Dec(%c)",hex,dec);
    return 0;
}
