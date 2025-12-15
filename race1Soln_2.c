#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<semaphore.h>
int main(){
    char s1[] = "I am Parent...\n";
    char s2[] = "I am Child...I am going to use semaphore\n";
    sem_t s;
    if(sem_init(&s,0,1)<0){
        perror("Semaphore initialization failed.\n");
        exit(1);
    }

    pid_t childpid = fork();
    if(childpid<0){
        perror("Fork failed.\n");
        exit(1);
    }
    int i=0;
    if(childpid==0){
        sem_wait(&s);
        while(s2[i]){
            fprintf(stderr,"%c",s2[i++]);
        }
        sem_post(&s);
        exit(0);
    }
    sem_wait(&s);
    while(s1[i]){
            fprintf(stderr,"%c",s1[i++]);
        }
    
    sem_post(&s);
    wait(NULL);
    sem_destroy(&s);
    
    return 0;
}