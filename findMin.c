#include <stdio.h>
#include <stdlib.h>

int findMin(int numParams, char * argv[]);

int main(int argc, char *argv[])
{
    printf("Find the sum of numbers entered by the user!!!\n");

    if(argc < 2){
        printf("Error: Insufficient parameters!!!\n");
        printf("Give at least one or more valid integer numbers as parameters.\n");
        return -1;
    }

    int numParams = argc -1;
    int min = 0;


    for(int i = 0; i < argc; i++){
        printf(" argv[%d] = %s\n", i, argv[i]);
    }

    min = findMin(numParams, argv);

    printf("The sum of numbers given is: %d\n", min);

    return 0;
}

int findMin(int numParams, char * argv[]){

   char *pParam;
   int min = 0;
   int num;

   pParam = argv[1];

   for(int i = 1; i <= numParams; i++ ){
     pParam = argv[i];  // Copy the pointer to the first parameter passed
     num = atoi(pParam);
     if(i== 1)
     {
     min = num;
     }
     if(min>num)
     {
     min = num;
     }
     printf("pParam = %s, min = %d\n", pParam, min);
   }

    return min;
}
