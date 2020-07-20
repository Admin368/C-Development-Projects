#include <stdio.h>
#include <string.h>

int main(){
    //get input
    char input[1000];
    printf("1st Line:");
    gets(input);
    char temp1[1000];
    printf("2nd Line:");
    gets(temp1);

    printf("\n");
    //declare some variables we need
    int noc,noc_temp1; //Number Of Characters
    noc=strlen(input);//finding number of characters in string
    int i,is; //i and is variabled used to go thru string
    int checking=0; //bolean representing searching for end of comment
    //concatinate
    noc_temp1=strlen(temp1);
    input[noc]='\n';
    input[noc_temp1]='\n';
    strcat(input, temp1);
    //look for "/"
    for(i=0;i<=noc;i++){
        if(input[i]=='/'){
            if(input[i+1]=='/'){
                input[i]=' ';
                checking=1;
                while(checking==1){
                    for(i<noc;i++;){
                        if(input[i]=='\n'){
                            input[i]=' ';
                            checking=0;
                        }
                        input[i]=' ';
                    }
                }
            }
            else if(input[i+1]=='*'){
                input[i]=' ';
                checking=1;
                while(checking==1){
                    for(i<noc;i++;){
                        if(input[i]=='*'){
                            if(input[i+1]=='/'){
                                input[i]=' ';
                                input[i+1]=' ';
                                checking=0;
                            }
                        }
                        input[i]=' ';
                    }
                }

            }
        }
    }
    printf("----------------------------\n");
    printf("PRINTINTING WITH REMOVED COMMENTS\n");
    printf("%s",input);
    return 0;
}