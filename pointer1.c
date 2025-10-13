#include<stdio.h>

int main(){
 int a = 100;
 char b= 'A';
 float c = 50.50;
 
 int *p1;
 char *p2;
 float *p3;
 
 printf("Size of p1: %ld\n",sizeof(p1));
 printf("Size of p2: %ld\n",sizeof(p2));
 printf("Size of p3: %ld\n",sizeof(p3));
 
 p1=&a;
 p2=&b;
 p3=&c;
 
 printf("Adress of a: %p\n",&a);
 printf("Adress of a: %p\n",p1);
 //printf("Adress of a: %d\n",p1);//there will be no error, but it will shown a warning as %d is a placeholder for integer
 
 
 printf("Value of a: %d\n",a);//direct referencing
 printf("Value of a using pointer: %d\n",*p1);//indirect referencing
 
 p1++;
 printf("p1 after increment(+1) %p\n",p1);
 printf("++p1 = %p\n",++p1);
 
 printf("display p1+3: %p\n",p1+3);//Here we are just displaying the value of p1+3 not updating it
 printf("p1++ + 2: %p\n",p1++ + 2);
 printf("p1: %p\n",p1);
}
