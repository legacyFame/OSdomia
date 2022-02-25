#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "string.c"
//FCFS

#define hello() (printf("hi")) //macro

void main(){
    int head=0;  //arg
    // int arr[] = {1,2,34,4};
    // int size = 4;
    int seeks=0;
    int cur;
    char *ini = input('Disk Array');
    char** arr = split(ini," ");
    int size = toInt(input("Whats the size"));
    for(int i=0;i<size;i++){
        cur = toInt(arr[i]);
        int distance  = abs(cur-head);
        seeks+=distance;
        head = cur;
    }
    printf("Total No of seek operations %d\n",seeks);
}