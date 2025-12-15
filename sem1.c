#include<stdio.h>
#include<unistd.h>//fork() krne ke liye chahiye
#include<semaphore.h>
#include<stdlib.h>

int main(){
    sem_t sem;
    if(sem_init(&sem,2,5)<0){
        perror("Semaphore initializtion failed.\n");
        exit(1);
    }
    int val;
    if(sem_getvalue(&sem,&val)<0){
        perror("Semaphore value accessing failed.\n");
        exit(1);
    }
    fprintf(stdout,"Sem value %d\n",val);    
    if((sem_wait(&sem)<0)){
        perror("Semaphore value cannot be decremented.\n");
        exit(1);
    }
    if(sem_getvalue(&sem,&val)<0){
        perror("Semaphore access failed.\n");
        exit(1);
    }
    fprintf(stdout,"Sem value %d\n",val);
     if((sem_post(&sem)<0)){
        perror("Semaphore value cannot be decremented.\n");
        exit(1);
    }
    if(sem_getvalue(&sem,&val)<0){
        perror("Semaphore access failed.\n");
        exit(1);
    }
    fprintf(stdout,"Sem value %d\n",val);
    sem_destroy(&sem);
    fprintf(stdout,"Semaphore destroyed\n");
    return 0;
}