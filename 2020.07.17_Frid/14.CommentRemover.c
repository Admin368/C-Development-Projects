#include <stdio.h>
#include <string.h>

int main(){
    //get input
    char input[]="
    #include <paulbetax.h> //header file
    int main(){ //main function
    /*
    this is where
    you write your code
    */
    int array[5];
    xled(2);
    return 0;
    }/0
    ";
    //declare some variables we need
    int noc; //Number Of Characters
    noc=strlen(input);//finding number of characters in string
    int i,is; //i and is variabled used to go thru string
    int checking=0; //bolean representing searching for end of comment
    //look for "/"
    for(i=0;i<noc=;i++){
        if(input[i]=="/"){
            if(input[i+1]=="/"){
                input[i]=' ';
                checking=1;
                while(checking==1){
                    for(i<noc;i++){
                        if(input[i]=='\n'){
                            input[i]=' ';
                            checking=0;
                        }
                        input[i]=' ';
                    }
                }
            }
            else if(input[i+1]=="*"){
                input[i]=' ';
                checking=1;
                while(checking==1){
                    for(i<noc;i++){
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
    printout();
    return 0;
}

void printout(){
    printf("----------------------------\n")
    printf("PRINTINTING WITH REMOVED COMMENTS\n");
    printf("%s",input);
    }
}