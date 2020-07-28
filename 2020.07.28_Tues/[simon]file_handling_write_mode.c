
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
    char line[255]="\nanother line of charcaters\n ";
    // writing to files
    // FILE * fopen(name_of_file,mode)
    myfilePtr = fopen(myfileName,"a");
    fputs(line,myfilePtr);

    return 0;
}

