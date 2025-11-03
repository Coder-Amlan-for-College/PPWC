#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
if(argc<=1){
  printf("No Arguments passed\n");
  return 1;
}
for(int i=0;i<argc;i++){
  printf("argv[%d]: %s\n",i,argv[i]);
}
int sum=0;
for(int i=0;i<argc;i++){
  sum += atoi(argv[i]);
}
printf("Sum: %d\n",sum);
return 0;
}
