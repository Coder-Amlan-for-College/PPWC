#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<semaphore.h>

int main(){
    char s1[] = "I am Parent...";
    char s2[] = "I am Child...";
    pid_t childpid = fork();
    if(childpid<0){
        perror("Fork failed.\n");
        exit(1);
    }
    int i=0;
    if(childpid==0){
        while(s2[i]){
            fprintf(stderr,"%c",s2[i++]);
            sleep(1);
        }
        exit(0);
    }
    while(s1[i]){
            fprintf(stderr,"%c",s1[i++]);
            sleep(1);
        }
    return 0;
}