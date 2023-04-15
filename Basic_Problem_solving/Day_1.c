// Check whether a number is even or odd => variable && input user
int num=50;
    if(num%2 == 0){
        printf("%d your number is event",num);
        
    }
    else printf("Number is odd");

    // get user input 
    int num;
    printf("Please provide your number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d your number is event", num);
    }
    else
        printf("Number is odd");

   // Check whether a character is a vowel or consonant = > variable &&input user &&switch_case char c;
    printf("Please provide your charcter: ");
    scanf("%c", &c);

    int lowercase_vowel, uppercase_vowel;
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c Number is vowel", c);
    }
    else
    {
        printf("%c number is consonent", c);
    }


    //switch case
    char c;
    printf("Please provide your charcter: ");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c vowel is a ", c);
        break;

    default:
        printf("%c consonent is a ", c);
    }



// Find the largest number among three numbers
    int number1;
    int number2;
    int number3;
    
    printf("please provie 1 number:");
    scanf("%d",&number1);
    printf("please provie 2 number:");
    scanf("%d",&number2);
    printf("please provie 3 number:");
    scanf("%d",&number3);
    printf("\nyour input  number : %d",number1);
    printf("\nyour input  number : %d",number2);
    printf("\nyour input  number : %d",number3);
    printf("\n");
    
    if(number1>number2 && number1>number3){
        printf("Big number is %d ",number1);
    }
    else if(number2>number1 && number2>number3){
       printf("Big number is %d ",number2);  
    }
    else{
       printf("Big number is %d ",number3);  
    }

#include <stdio.h>

    int main()
    {
       int num1, num2, num3, largest;

       printf("Enter three numbers: ");
       scanf("%d %d %d", &num1, &num2, &num3);

       switch (1)
       {
       case 1:
           if (num1 > num2 && num1 > num3)
           {
               largest = num1;
           }
           else if (num2 > num3)
           {
               largest = num2;
           }
           else
           {
               largest = num3;
           }
           break;
       default:
           printf("Invalid choice\n");
           break;
       }

       printf("The largest number is %d\n", largest);

       return 0;
    }
