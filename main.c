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

struct Map{
    int key;
    int val;
};

struct Mapper{
    int capacity;
    int i;
    Map **maps;
};

struct Pager
{
    int capacity;
    int i;
    int** pages;
    Mapper *map;
};

bool in_pager( Pager *p,int no){
    for(int i=0;i<p->i;i++)
     if(p->pages[i]==no) return true;
    return false;
}

bool overflow(Pager *page){
    return page->i>=page->capacity;
}

void push_page(Pager *p,int page){
    push_map(p->map,page,p->i);
    p->pages[p->i]= page;
}

Map* get_map( Mapper *m,int no){
    Map *least = {-1,9999};
    for(int i=0;i<m->i;i++)
     if(m->maps[i]==no) return m->maps[i];
    return least;
}

bool in_map(Mapper *m,int k){
    Map* m1  = get_map(m,k);
}

void push_map(Mapper* m,int key,int val){
    int i = m->i;
    Map *map = (Map*) malloc(sizeof(Map));
    map->key = key;
    map->val = val;
    m->maps[i] = map;
    m->i++;    
}

int get(Mapper *m,int key){
    for (int i=0;i<m->i;i++)
        if(m->maps[i]->key==key) return m->maps[i]->val;
    return 0;    
}

Map* lru(Mapper *m)
{
    Map *least = {-1,9999};
    
    if(m->i ==0) push(m,-1,-1);

    for (int i=0;i<m->i;i++){
         Map *map = m->maps[i];
         least = map ? map->val<least->val | least->key==-1: least;
    }
    return least;
}

void faults(int req[],int size, Pager *p, Mapper *m){

    for(int i=0;i<size;i++){
        if(overflow(p)){

        }
        else
        {
            /* code */
        }
        
    }
}



void main(){
    printf("\n");
    int arr = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int size = 13;
    // char *ini = input('Page Request Array');
    // int size = toInt(input("Whats the size of the Array?"));
    // int *reqs = toIntArray(arr,size);
    // int capacity = toInt(input("Whats the capacity"));
    int page_faults=0;
    int capacity=4;
    Mapper *M1 = {size,0,malloc(sizeof(Map)*size)};
    Pager P1 = {capacity,0,malloc(sizeof(int)*capacity),M1};



    // push(&M1,1,2);
    // get(&M1,1);
    // printf("%d",get(&M1,1));
}
    // int* he = len("ST SD"," ");
    // P1.arr[0]=1;
    // bool flag = in_pager(P1,1);
    // printf("%d",flag);
    // int cache_i=0;
