#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    fp = fopen("/userhomes/aa4338/gridlist.txt", "r");
    char inputString[200] = {0}; //Stores chars from gridcli -l
    int nodeStatus[19] = {0}; //Numbers for grid nodes online
    int j=0; //Index for nodeStatus
    int g = 0;
    
    
    for (int i=0; i<sizeof(inputString)/sizeof(char); i+=1){ //i runs through
        fgets(inputString, sizeof(inputString), fp);
        if (inputString[g] == 'g'){  //Look for when we start gridXX
            if (inputString[g+4] == '0'){ //Focuses on the first 9 nodes
                nodeStatus[j] = inputString[g+5]; //Adds node number to nodeStatus array
                j++;		
            }else{ //When grid node is past 09
                nodeStatus[j] = (10*inputString[g+5]); //Stores grid17 as 77
                j++;
            };
        };
        
    };
    fclose(fp);
    
    for(int x=0;x<20;x++){
	char nodePastTen = nodeStatus[x]/10.0f;
        //if(nodeStatus[x]<100 && nodeStatus[x]>0){
         //   printf("%c\n", nodeStatus[x]);
       // };
        //if(nodeStatus[x]>0){
          //  printf("1%c\n",(nodePastTen));
        //}else{
          //  return 0;
        //};
        //char nodePastTen = nodeStatus[x]/10.0f;
        if(nodeStatus[x]<100){
            printf("Grid # 0%c\n", nodeStatus[x]);
        }else{
            printf("Grid # 1%c\n",(nodePastTen));
        };
        
    };
    return 0;
  
};

