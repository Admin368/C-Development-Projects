#include<stdio.h>
#include<string.h>

int main(){
    char words[100];
    int count=0;
    printf("Enter Words:");
    gets(words);
    int i;
    for(i=0;i<100;i++){
        if(words[i]==' '){
            count++;
        }
    }
    int x=100;
    char numbers[]={'2','3','5','4'};
    printf("%s\n",words);
    printf("Number of Spaces : %d\n",count);
    for(i=0;i<7;i++){
        printf("Array %c",numbers[i]);
    }
    
    return 0;
}