#include <stdio.h>

int main() {
 char c;
 printf("Enter A Character:");
 scanf("%c",&c);
 printf("Your Input  Value is: %c",c);
 
 if((c>='a' && c<='z')||(c>='A' && c<='Z')){
     printf("\nis a alphabet");
 }
 else{
     printf("is not a alphabet");
 }
 

    return 0;
}