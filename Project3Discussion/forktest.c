#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{   
    
    int x = 10;
    
    if(fork() == 0)
    {
            printf("[Child] pid %d from [parent] pid %d\n",getpid(),getppid());
            
            x = 20;
            printf("Child x : %d\n", x);
            
            exit(0);
    }

    wait(NULL);
    printf("Parent x: %d\n", x);
    
     
}
