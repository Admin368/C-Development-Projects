#include <stdio.h>
#define ul unsigned long long
long int main(){
ul x1=0;
ul x2=1;
ul x3;
int i;
printf("%d\n",x1);
printf("%d\n",x2);
for(i=0;i<=20;i++){
x3 = x1+x2;
printf("%d\n",x3);
x1=x2;
x2=x3;
}
return 0;
}