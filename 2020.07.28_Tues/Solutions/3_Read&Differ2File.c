#include <stdio.h>

int main(){
    char character1;
    char character2;
    FILE * filepointer1;
    FILE * filepointer2;
    char SameCharBuffer[255];
    char filename1[100] = {"3_samplefile1.txt"};
    char filename2[100] = {"3_samplefile2.txt"};
    filepointer1 = fopen(filename1,"r");
    filepointer2 = fopen(filename2,"r");
    fseek(filepointer1,0,SEEK_SET);
    fseek(filepointer2,0,SEEK_SET);
    while(character1!=EOF){
        //printf("%c",characterx);
        printf("1\n");
        character1 = getc(filepointer1);
        character2 = getc(filepointer2);
        if(character1!=character2){
            while(getc(character1)!='\n'){
                printf("2\n");
                fseek(filepointer1,-1,SEEK_CUR);
            }
            while(getc(character2)!='\n'){
                printf("3\n");
                fseek(filepointer2,-1,SEEK_CUR);
            }
            fseek(filepointer1,1,SEEK_CUR);
            fseek(filepointer2,1,SEEK_CUR);
            printf("\n THE FOLLOWING LINE IS NOT THE SAME \n");
            printf("Line1:");
            character1 = getc(filepointer1);
            while(character1!='\n'){
                printf("3\n");
                putchar(character1);
                character1 = getc(filepointer1);
            }
            printf("\n");
            printf("Line2:");
            while(character2!='\n'){
                printf("4\n");
                putchar(character2);
                character2 =getc(filepointer2);
            }
            fclose(filename1);
            fclose(filename2)
            return 0;
        }
    }
}
