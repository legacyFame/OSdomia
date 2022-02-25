
// String manipulation
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char* input(){ //safest way using pointer to get string in for strlen to work properly
    // puts(q);
    char *str = (char *) malloc(sizeof(1000));
    gets(str); //takes 1st line
    return str;
}

char** split(char str[], char delims[]) {
    char *token = strtok(str, delims);
    char **answer= (char **) malloc(sizeof(token)*50);
    int top = 0;
    while (token != NULL) {
        answer[top] = token;
        top++;
        token = strtok(NULL, delims);
    }
    return answer;
}

int len(char str[], char delims[]) {
    char *token = strtok(str, delims);
    int size = 0;
    while (token != NULL){
        size++;
        token = strtok(NULL, delims);
    }
    return size;
}

int lenString(char str[], char delims[]) {
    int size = 1;
    bool signal = true;
    int delim_cur = 0;

    for(int i=0;i<strlen(str);i++){
        if(str[i]==delims[0] & signal){
            size++;
            signal = false;
            delim_cur++;
        }
        else
        { 
            if(signal==false){
                signal = true ? delim_cur>=strlen(delims) : false;
                delim_cur = 0 ? signal : delim_cur+1;
            }
            
        }
    }
    return size;
}


int toInt(char c[]) { 
    int value;
    sscanf(c, "%d", &value);
    // printf("%d val",value);
    return value;
}

char* toString(char *str, int no) { // usage - char *str; str = toString(str,100);
    sprintf(str, "%d", no);
    return str;
}
bool isequal(char str[], char str1[]){
    if(str==str1)   //not correct better if you use some methods in string.h  or manually run a for loop
        return true;
    return false;
}
// int main(){
//    char str[]="Hi Hiro";
//    char **hi = split(str," ");
// //    for(int i=0; i<sizeof(hi);i++){
// //        printf(hi[i]);
//     // printf("%d",lenString("Hi"," "));

// //    }
// return 0;
// }