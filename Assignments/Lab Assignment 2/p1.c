#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if((ch >= 65 && ch <= 90) ||( ch >= 97 && ch<= 122) ){
    if(ch =='A' || ch == 'E' || ch=='I' || ch=='O' || ch == 'U'||ch=='a' || ch == 'e' || ch=='i' || ch=='o' || ch == 'u'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
  }
  else{
    printf("Invalid input");
  }
    return 0;
}

