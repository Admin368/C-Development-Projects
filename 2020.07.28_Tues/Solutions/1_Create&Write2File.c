#include <stdio.h>

int main(){
    char filename[100] = {"1_samplefile.txt"};
    char input[255];
    FILE * filepointer;
    filepointer = fopen(filename,"w");
    printf("WRITE INPUT TO ENTER INTO FILE\n");
    printf("Enter Your Input:");
    gets(input);
    printf("YourInput:%s\n",input);
    fputs(input,filepointer);
    printf("Done,\n press Enter to open file");
    fclose(filepointer);
    system("notepad 1_samplefile.txt");

}
