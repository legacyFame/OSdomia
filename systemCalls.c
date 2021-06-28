#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
 
int main()
{
    pid_t cpid;
    if (fork()== 0){
        printf("Child is running\n");
        printf("Pid %d\n", getpid());
        printf("Parent %d\n", getppid());
        exit(0);
    }
    else
        cpid = wait(NULL); //Cascading termination
    printf("Main pid %d\n", getpid());
    printf("Child pid procured after waiting %d\n", cpid);
    return 0;
}