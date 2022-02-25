#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "string.c"
//FCFS
   // int arr[] = {1,2,34,4};
    // int size = 4;
#define hello() (printf("hi")) //macro



typedef struct Pager Pager;
typedef struct Map Map;
typedef struct Mapper Mapper;

struct Pager
{
    int capacity;
    int i;
    int* arr;
};

bool in_pager( Pager page,int no){
    for(int i=0;i<page.i;i++)
     if(page.arr[i]==no) return true;
    return false;
}

bool overflow(Pager page){
    return page.i>=page.capacity;
}

struct Map{
    int key;
    int val;
};

struct Mapper{
    int capacity;
    int i;
    Map *maps;
};

void push(Mapper* m,int key,int val){
    int i = m->i;
    if(i>=m->capacity) printf("Overflowing Mapper\n");
    else
    {
      Map *map = (Map*) malloc(sizeof(Map));
      map->key= key;
      map->val = val;
      m->maps[i] = map;
      m->i++;    
    }
    
}


void main(){
    // char *ini = input('Page Request Array');
    // char** arr = split(ini," ");
    // int size = toInt(input("Whats the size of the Array?"));
    // int *reqs = toIntArray(arr,size);
    // int capacity = toInt(input("Whats the capacity"));
    // int page_faults=0;
    int capacity=4;
    Pager P1 = {capacity,1,malloc(sizeof(int*))};
    Mapper M1 = {0,capacity,malloc(sizeof(Map)*capacity)};



}
    // int* he = len("ST SD"," ");
    // P1.arr[0]=1;
    // bool flag = in_pager(P1,1);
    // printf("%d",flag);
    // int cache_i=0;
