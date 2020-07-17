#include<stdio.h>

int main(){
    //int twoDarray[row][column]={{},{}};
    int twoDarrya[2][3]={{1,9,-13},{20,5,16}};
    //we use nested loops
    int i,j;
    for (i=0;i<2;i++){//column
        for(j=0;j<3;j++){//row
            printf("%3d,",twoDarrya[i][j]); //print value of row i,column j
        }
        printf("\n");
    }
}