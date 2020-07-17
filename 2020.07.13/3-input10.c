#include <stdio.h>
int main(){
int x=1;
int sum;
int input1;
int input2;
while(x==1){
printf("Enter Input1:");
scanf("%d",&input1);
printf("Enter Input2:");
scanf("%d",&input2);
int sum=input1+input2;
if(sum>10){
printf("input1 = %d\n",input1);
printf("input2 = %d\n",input2); 
printf("Sum is Greater Than 10\n");
x=0;
}
if(sum<10){
printf("input1 = %d\n",input1);
printf("input2 = %d\n",input2); 
printf("Sum is lesser Than 10\n");
x=0;
}
if(sum==10){
printf("Congrats Sum = 10\n");
printf("input1 = %d\n",input1);
printf("input2 = %d\n",input2); 
}
}
return 0;
}