#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<semaphore.h>
#include<stdlib.h>

int main(){
    char s1[] = " is ";
    char s2[] = " very ";
    char s3[] = "PPWC ";
    char s4[] = " interesting ";
    sem_t sem1,sem2,sem3;
    sem_init(&sem1,1,0);
    sem_init(&sem2,1,0);
    sem_init(&sem3,1,0);
    if(fork()==0){
        printf("%s",s3);
        sem_post(&sem1);
    }
    if(fork()==0){
        sem_wait(&sem1);
        printf("%s",s1);
        sem_post(&sem2);
    }
    if(fork==0){
        sem_wait(&sem2);
        printf("%s",s2);
        sem_post(&sem3);
    }
    if(fork==0){
        sem_wait(&sem3);
        printf("%s",s4);
    }
    for(int i=0;i<4;i++){
        wait(NULL);
    }
    sem_destroy(&sem1);
    sem_destroy(&sem2);
    sem_destroy(&sem3);
}