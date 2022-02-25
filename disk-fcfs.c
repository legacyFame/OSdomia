#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "string.c"
//FCFS

#define hello() (printf("hi")) //macro
//Disk Access Time = Seek Time + Rotational Latency + Transfer Time


void main(){
    int head=0;  //arg
    // int arr[] = {1,2,34,4};
    // int size = 4;
    int seeks=0;
    int cur;
    char *ini = input('Disk Request Array');
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


void fcfsDisk(int head,int reqs[],int size){
    int seeks=0;
    int h = head;
    for(int i=0;i<size;i++){
        int cur = reqs[i];
        int distance  = abs(cur-h);
        seeks+=distance;
        h = cur;
    }
    printf("Total No of seek operation %d\n",seeks);
}


void main(){
    char *ini = input('Disk Request Array');
    char** arr = split(ini," ");
    int size = toInt(input("Whats the size"));
    int head = toInt(input("HEAD?"));
    int *reqs = toIntArray(arr,size);
    fcfsDisk(head,reqs,size);
}