
/*
file handling
-read files,r
-write to files,w
-appending to files,a
-error handling
*/
#include<stdio.h>

int main()
{
    char myfileName[20]="sample_file.txt";
    FILE* myfilePtr;
    char ch;
    int returned;
    char line[255];
    // reading files
    // FILE * fopen(name_of_file,mode)
    myfilePtr = fopen(myfileName,"r");
    fseek(myfilePtr,3,SEEK_SET);
    ch = getc(myfilePtr);
    putchar(ch);
    fseek(myfilePtr,4,SEEK_CUR);
    ch = getc(myfilePtr);
    putchar(ch);
    fseek(myfilePtr,-4,SEEK_END);
    ch = getc(myfilePtr);
    putchar(ch);
    // read whole line
    fseek(myfilePtr,0,SEEK_SET);
    //fgets(line,10,stdin);
    putchar('\n');
    //puts(line);
    //returned= fputs(line,stdout);
    //putchar(returned);
    // read whole file
    fseek(myfilePtr,0,SEEK_SET);
    ch = getc(myfilePtr);
    while(ch!=EOF)
    {
        putchar(ch);
        ch = getc(myfilePtr);
    }


    return 0;
}
