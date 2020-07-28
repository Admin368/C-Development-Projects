/*
FILE is included in stdio.h

FILE * fopen(name_of_file,mode)

>mode is a char string ,put in "" 2 quotes
>files gets into buffer
>returns a pointer to where the files starts in a the buffer
modes for fopen
-read "r"
-write "w"
-append mode


"getc" is used to get a character from a file
takes in pointer of where the file data is in the buffer
returns a character != string.

filepointer = fopen(filename,"r");
characterx = getc(filepointer);
printf("%c",characterx);
puts(char)

NOTE : you can not do math with "filepointer+1" to get another character
it doesnt work,
its like u adding 1 to the address line which might give u unn defined 
*/
/*
fseek(fp, 0L, SEEK_SET); 
// go to the beginning of the file 
SEEK_SET BEGING FROM FILE
SEEK_CUR CURRENT POSITION
SEEK_ND OF FILE

fseek(fp, 10L, SEEK_SET); // go 10 bytes into the file 
fseek(fp, 2L, SEEK_CUR); // advance 2 bytes from the current position 
fseek(fp, 0L, SEEK_END); // go to the end of the file 
fseek(fp, -10L, SEEK_END); // back up 10 bytes from the end of the file

fseek(filepointer,2,SEEK_SET);
THE POINTER IS CHANGED TO WHERE THE CHARACTER IS
THIS WILL PRINT THE 3 BYTE IN THE FILES WHICH IS "O"
FROM #module ...... (in the sample file)

SEEK_END need you to put -value coz u seeking backwrd fter the end


if your file doesnt exit in write mode it might create it
.//fgets returns pointer if file exists
//if not not returns nuLL


*/
#include <stdio.h>

int main(){
    char filename[20]="sample_file.txt";
    FILE * filepointer;
    char characterx;
    //reading files
    //FILE * fopen(name_of_file,mode)
    filepointer = fopen(filename,"r");
    fseek(filepointer,3,SEEK_SET);
    characterx = getc(filepointer);
    puts(filepointer); // puts can output from pointer
    //DONT FORGET TO CLOSE A FILE AFTER DONE
    fclose(filepointer);
    //sdtin
    //stdout
    //stderror
//they are pointers to files made to files made by default to keep inout,output..
//putchar() writes character on output
//puts() takes in pointer
//fputs(buffer,source) carries content fromsource to a buffer.array
//fputs(buffer,stdin) carries input frome the console into the buffer
//fputs(buffere)
//fput(constant char*, FILE*) 
//  a string is a an array of constant charcters
//it takes in constant input character pointer into a file by giving it file pointer
//in files EOF if the character at the end of file

//write mode overwrites
    fseek(filepointer,0,SEEK_SET)
    fgets(line,10,filepointer);//
    return 0;
}
