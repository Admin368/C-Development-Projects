#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    int ii,y,X,N;
    int WordSize;
    char input[]={"Hi there i am John"};
    int NumberOfCharacters;
    NumberOfCharacters=strlen(input);
    int NumberOfWords = 0;
    for(ii=0;ii<=NumberOfCharacters;ii++){
        if(input[ii]==' '){
            NumberOfWords++;
        }
    }
    NumberOfWords++;
    printf("%s\n",input);
    printf("NumberOfWords[%d],NumberOfCharacters[%d]\n",NumberOfWords,NumberOfCharacters);
    X=0;
    for(WordSize=0;WordSize<=NumberOfCharacters;WordSize++){
        N=0;
        for(i=0;i<=NumberOfCharacters;i++){
            if(input[i]==32){X=0;}
            if(input[i]!=32){X++;}
            //X++;
            if(X!=0){
            if(X==WordSize){N++;}
            }                
        }   
        if(N!=0){
            printf("Words of Size[%2d] :",WordSize);
            for(y=0;y<N*12;y++){
                printf("#");
            }
        printf("X[%d]\n",N);
        }
    }
}

