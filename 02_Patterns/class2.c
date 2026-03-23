#include<stdio.h>
void man(){

for (int i=0; i<=10; i++){
    for(int j=0; j<=10; j++){
           if(((i==0 || i==3 ) && (j>=3 && j<=7)) ||
            ((j==3 || j==7) && (i>=0 && i<=3))  || 
            ((i+j==10 || i==j) && (i>=5 && i<=7)) || 
            ((i+j==13 || i-j==3) && (i>=8 && i<=10)) ||
             (i>=3 && i<=8 && j==5)){
            printf("#");
           }else{
            printf(" "); 
           }
    }
    printf("\n");
      
}
}

void name(){
    for (int i=0; i<=10; i++){
    for(int j=0; j<=10; j++){
           if(((i==0 || i==5 ) && (j>=0 && j<=5 )) || (i<=3 && j==0) || (i>=3 && i<=5 || j==5)){
            printf("#");
           }else{
            printf(" "); 
           }
    }
    printf("\n");
      
}
}
int main(){
    //man();
    name();
}