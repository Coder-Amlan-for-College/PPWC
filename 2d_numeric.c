#include<stdio.h>
void func1(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]++;
        }
    }
    return;
}
/*
void func2(int row,int col,int (*p)[col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            p[i][j]++;
        }
    }
    return;
}*/
void func2(int row,int col,int (*p)[col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           (*p)[j]++;
        }
        p++;
    }
    return;
}

void func3(int row,int col,int *p){
    /*
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             (*p)++;
             p++;
        }
    }
    */
    for(int i=0;i<row*col;i++){
        (*p)++;
        p++;
    }
    return;
}
int main(){
    int row=2,col=3;
    int a[2][3] = {{1,2,3},{4,5,6}};

    func1(row,col,a);
    printf("After calling func1:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    func2(row,col,a);
    printf("After calling func2:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    func3(row,col,a[0]);//or func3(row,col,&a[0][0])
    printf("After calling func3:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
After calling func1:
   2   3   4
   5   6   7
After calling func2:
   3   4   5
   6   7   8
After calling func3:
   4   5   6
   7   8   9
*/