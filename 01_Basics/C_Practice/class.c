#include<stdio.h>

/*
Practice File: Beginner C Programs

Pattern: control flow, loops, basic arithmetic

Sample Input:
5

Sample Output:
0
1
1
2
3
5
8
13
21
34
*/


 
void leapyear(){
   int year;
   scanf("%d", &year);

   if((year%4==0) || (year%400==0) && (year%100!=0) ){
      printf("Leap Year");
   }else{
      printf("Non Leap Year");
   }
}

void percentage(){
   int subject1,subject2,subject3,subject4, subject5;
   printf("Enter Subject 1 Marks: ");
   scanf("%d", &subject1);
   
   printf("Enter Subject 2 Marks: ");
   scanf("%d", &subject2);
    
   printf("Enter Subject 3 Marks: ");
   scanf("%d", &subject3);

   printf("Enter Subject 4 Marks: ");
   scanf("%d", &subject4);

   printf("Enter Subject 5 Marks: ");
   scanf("%d", &subject5);

   int sum=subject1+subject2+subject3+subject4+subject5;
   float percentage=(sum/500.0)*100.0;
   if(percentage>90){
      printf("A");
   }else if(percentage>80 && percentage<=90){
      printf("B");
   }else if(percentage>60 && percentage<=80){
      printf("C");
   }else{
      printf("D");
   }
}

void evenOdd(){
   int num;
   scanf("%d", &num);
   if((num/2)*2==num){
       printf("Even");
   }else {
      printf("Odd");
   }
}

void greatest(){
   int a,b,c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   if(a>b && a>c){
      printf("%d", a);
   }else if(b>a && b>c){
      printf("%d", b);
   }else {
      printf("%d", c);
   }
}

void compare(){
   int a,b;
   scanf("%d", &a);
   scanf("%d", &b);
   if(a==b){
      printf("Equal");
   }else{
      printf("Not-Equal");
   }
}

void swap(){
   int a=5;
   int b=6;
   int c=b;
   a=c;
   b=a;

}

void temperature(){
   float temp;
   scanf("%f", &temp);
   float convert=(9.0/5.0)*temp+32;
   printf("%f", convert);
}

void circle(){
   float radius;
   scanf("%f", &radius);
   float circum=2.0*3.14*radius;
   float area=3.14*radius*radius;
   printf("Circumference: %f \n", circum);
   printf("Area: %f \n", area);
}

void switchcase(){
 
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

void sumofN(){
   int num,sum;
   printf("Enter Number: ");
   scanf("%d", &num);
   
   sum=num*(num+1)/2;
   printf("Sum Upto Numbers is: %d", sum);
}

void factorial(){
   int num,factorial;
   printf("Enter Number: \n");
   scanf("%d",&num);

   factorial=1;
   while(num>1){
      factorial=factorial*(num);
      num=num-1;
   }
   printf("factorial is : %d",factorial);
}

void SumEvenandOdd(){
   int num, sumEven, sumOdd;
   printf("Enter Number: ");
   scanf("%d",&num);

   sumEven=num*(num+1);
   sumOdd=num*num;

   printf("Sum Of Even: %d\n",sumEven);
   printf("Sum Of Odd: %d\n",sumOdd);

}

void fibonacci(){
   int fibo[10];
   fibo[0]=0;
   fibo[1]=1;
   printf("%d\n%d\n",fibo[0],fibo[1]);
   for(int i=2; i<10; i++){
      fibo[i]=fibo[i-1]+fibo[i-2];
      printf("%d\n", fibo[i]);

   }
   
}







int main(){  
   //leapyear();
   //percentage();
   //evenOdd();
    //greatest();
    //compare();
    //swap();
   // temperature();
    //circle();
    //switchcase();
    //sumofN();
    //factorial();
    //SumEvenandOdd();
    fibonacci();

   return 0;
}
