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
    if(childpid==0)//child process
    {
        //int err = execl("/bin/ls","ls","-l",NULL);
        //int err = execl("/home/iteradmin/Documents/2341014053/PPWC/sum","sum",NULL);
        //int err = execlp("ls","ls","-l",NULL);
        int err = execlp("sum","sum",NULL);//in terminal PATH=$PATH:./ after compiling
        if(err==-1){
        perror("execl failded\n");

      }
      fprintf(stderr,"I am child.. PID=%ld, PPID=%ld\n",(long)getpid,(long)getppid);
      exit(1);
    }
    int status;
    pid_t returnpid = wait(&status);
    fprintf(stdout,"I am Parent(%ld).\nChild(%ld) returned status: %d\n",(long)getpid,(long)returnpid,status);
    return 0;
}