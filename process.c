#include<stdio.h>
#include<unistd.h>
int main(){
 pid_t childpid;
 
 childpid = fork();
 
 
 printf("My PID: %ld, Parent PID: %ld\n",(long)getpid(),(long)getppid());
 getchar();
 return 0;
}
/*
My PID: 4603, Parent PID: 3781
My PID: 4604, Parent PID: 4603

*/
