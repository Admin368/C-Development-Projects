#include <stdio.h>

int main(){
    char filename[100]="2_samplefile.txt";
    char characterx;
    FILE * filepointer;
    filepointer = fopen(filename,"r");
    //getc changes the pointer to the pointer to the next pointer
    fseek(filepointer,0,SEEK_SET);
    characterx = getc(filepointer);
    printf("File:\n");
    while(characterx!=EOF){
        printf("%c",characterx);
        characterx = getc(filepointer);
    }
    fclose(filepointer);
    return 0;
}
