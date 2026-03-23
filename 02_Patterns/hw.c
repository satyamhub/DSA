#include<stdio.h>

/*
Practice File: Shape And Name Drawing

Pattern: nested loops, pattern printing
*/

int main(){
    int a,b;
    char c;
    printf("Enter first Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Operator: ");
    scanf(" %c", &c);
    

    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    int ratio=a/b;


    switch (c)
    {
     case '+':
        
        printf("%d",sum);
        break;
    
    case '-':
       
        printf("%d",difference);
        break;

    case '*':
      
        printf("%d",product);
        break;
    
    case '/':
        
        printf("%d",ratio);
        break;
    
    default:
        printf("Enter Valid Operator");
        break;
    }



}
