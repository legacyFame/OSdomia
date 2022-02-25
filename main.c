#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "string.c"
//FCFS
   // int arr[] = {1,2,34,4};
    // int size = 4;
#define hello() (printf("hi")) //macro

//Disk Access Time = Seek Time + Rotational Latency + Transfer Time



void main(){
    char *ini = input('Disk Request Array');
    char** arr = split(ini," ");
    int size = toInt(input("Whats the size"));
    int head = toInt(input("HEAD?"));
    int *reqs = toIntArray(arr,size);
    fcfsDisk(head,reqs,size);
}
    // int* he = len("ST SD"," ");
