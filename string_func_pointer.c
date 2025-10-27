#include<stdio.h>
void func1(int row,int col,char s[row][col]){
   for(int i=0;i<row;i++){
    for(int j=0;s[i][j]!='\0';j++){
        s[i][j]+=32;
    }
   }
   return;
}
void func3(int row,int col,char *p){
   for(int i=0;i<row;i++){
    for(int j=0;p[j]!='\0';j++){
        p[j]-=32;
    }
    p+=col;
   }
   return;
}
int main(){
    int row=3,col=100;
    char s[3][100]={"AAA","BBBB","CCCCC"};
    func1(row,col,s);
    printf("After calling func1\n");
    for(int i=0;i<row;i++){
       fputs(s[i],stdout);
       printf("\n");
    }
    func3(row,col,&s[0][0]);
    printf("After calling func3\n");
    for(int i=0;i<row;i++){
       fputs(s[i],stdout);
       printf("\n");
    }
    return 0;
}