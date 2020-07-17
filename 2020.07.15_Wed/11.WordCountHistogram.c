#include<stdio.h>
#include<string.h>
int main(){
    int X,N;
    int WordSize;//number of characters per word
    int y;//insignificant variable counter
    //get input
    char input[]={"Hi there i am John"};
    //count the characters
    int NumberOfCharacters;
    NumberOfCharacters=strlen(input);
    // count number of words
    int NumberOfWords = 0;
    int i=0; // reseting random counter
    int ii;
//printf("Entering Loop 1\n");
    for(ii=0;ii<=NumberOfCharacters;ii++){
//printf("Entering Loop 2\n");
        if(input[ii]==' '){
            NumberOfWords++;//add 1 after each space
        }
    }
    NumberOfWords++;
    //make number of Characters limit of NumberOfWords for loop [size]
printf("NumberOfWords[%d],NumberOfCharacters[%d]\n",NumberOfWords,NumberOfCharacters);
    for(WordSize=0;WordSize<=NumberOfCharacters;WordSize++){
//printf("Entering Loop 3\n");
        N=0;//number of words per WordSize
        //go thru the whole array counting (WordSize=1;Wordsize<NumberOfCharacters;WordSize++)
        for(i=0;i<=NumberOfCharacters;i++){
//printf("Entering Loop 4\n");
            if(input[i]!=' '){X=0;}
//printf("Entering Loop 5\n");
                //int X;//count number of characters of each word
            X++;
            //for(X=0;X<=NumberOfWords;X++){
//printf("Entering Loop 6\n");
                //{ count int X(number of characters of Size "WordSize")
            if(X=WordSize){N++;}                
        }    
        if(N!=0){//if N = 0 {Print nothing}
//printf("Entering Loop 7\n");
            //else{ for loop print X number of WordSize }
            printf("WordOfSize[%d] :[%d]",WordSize,N);
            for(y=0;y<X;y++){
//printf("Entering Loop 8\n");
                printf("#");
            }
        }
        printf("\n");
    }
}

