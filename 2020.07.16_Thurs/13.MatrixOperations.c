#include<string.h>
#include<stdio.h>

//create Matrices
int matrix1[2][2]={{0,0},{0,0}};
int matrix2[2][2]={{0,0},{0,0}};
int r;//row
int c;//column
int input;//scanf input
void printMatrix1();
void printMatrix2();
void inputMatrix(int m);
char printspaces(int s);
int getinput();
int main(){
    //print matrix1
    printMatrix1();
    //input Matrix 2
    printMatrix2();
    //input Matrix 2
    inputMatrix(1);
    printMatrix1();
    //Addition
    //Subtraction
    //Multiplication
    //division
return 0;
}


void printMatrix1(){
    printf("Printing Matrix1\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            printf("[");
            printf("%2d",matrix1[r][c]);
            printf("]");
        }
        printf("\n");
    }
}

void printMatrix2(){
    printf("Printing Matrix1\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            printf("[");
            printf("%2d",matrix2[r][c]);
            printf("]");
        }
        printf("\n");
    }
}

void inputMatrix(int m){
    switch (m){
    case 1://inputting matrix1
    printf("Input Matrix1\n");
    printf("Please Enter Only Numbers\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            input=0;
            //printf("[");
            scanf("%d",&input);
            getinput();
            matrix1[r][c]=input;
            printf("]");
        }
        printf("\n");
        //printspaces(16);
    }
        break;
    case 2://inputting matrix2
        break;
    default:
        printf("Sorry No Matrix Found");
        break;
    }
}
char printspaces(int s){
    int ix;//number of spaces to print
    for(ix=0;ix<s;ix++){
        printf("\n");
    }
}

int getinput(){
    scanf("%d",&input);
}