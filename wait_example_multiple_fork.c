#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
    pid_t childpid;
    childpid = fork();

    if(childpid==-1){
       perror("fork failed\n");
       exit(-1);
    }
    if((childpid=fork())==0)//child process
    {
      printf("Child 1: pid:%ld\n",(long)getpid);
      if((childpid=fork())==0)//child process
      {
      printf("Child 2: pid:%ld\n",(long)getpid);
      exit(1);
      }
      printf("Child 3: pid:%ld\n",(long)getpid);
    }
    int status;
    pid_t returnpid = wait(&status);
    fprintf(stdout,"I am Parent(%ld).\nChild(%ld) returned status: %d\n",(long)getpid,(long)returnpid,status);
    return 0;
}