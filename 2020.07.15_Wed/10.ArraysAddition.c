#include<stdio.h>

int main(){
    //int twoDarray[row][column]={{},{}};
    int twoDarray[2][3]={{1,2,3},{4,5,6}};
    int twoDarray2[2][3]={{1,1,1},{1,1,1}};
    int twoDarray3[2][3];
    int i,j;
    for (i=0;i<2;i++){//column
        for(j=0;j<3;j++){
            twoDarray3[i][j]=twoDarray[i][j]+twoDarray2[i][j];
        }
    }
    //imagine it as a table
    //if adding,multiplying the matrices u follow the 2x3 by 3x3 rules
    //just like normal matrices
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%3d,",twoDarray3[i][j]);
        }
        printf("\n");
    }
}