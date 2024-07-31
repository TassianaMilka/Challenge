#include <stdio.h>

int main() {

int num=0;
int num1 [2] [2];
int num2 [3] [3];
int num3 [3] [1];
int num4 [1] [1];
int num5 [4] [2];
int r,c;
 
   
    /*Hello,my name is Tassiana Milka and my location is Brazil.*/
    /*My logical the code is not user functional.*/
   
   
   /*One the question explantion about two number +,my logical programming is 
   auto.*/

   printf("One\n");
    
     
    for(r=0;r<2;r++){
        printf("\n");
    for(c=0;c<2;c++){
    
    printf("%d",&num1[r][c]);
    
    num1 [r] [c]++;
    
        num=num1[r][c];
        
       }
    }
   
    printf("\n\n");
    
     /*Two  the question explantion about write in number to a.*/
 
    
     printf("Two\n");
    
    for(r=0;r<3;r++){
        printf("\n");
    for(c=0;c<3;c++){
    
    num2 [r] [c]++;
    
    printf("b-r-a\n");
        
       }
    }
    
    
    /*Tree the question explantion about very number,my logical programming is one r
    and c  the number is 0.*/
    
     printf("======================Tree===========================\n");
    

    for(r=0;r<2;r++){
        printf("\n");
    for(c=1;c<2;c++){
    
    printf("%d",num3[r][c]);
    
    num3 [r] [c]++;
    
        
       }
    } 
     
    printf("\n\n");
    
     /*Tree-(1) the question explantion about very number,my logical programming is one r
    and c  the number is 0 and 1.*/
    printf("Tree-(1)\n");
    

    for(r=0;r<2;r++){
        printf("\n");
    for(c=1;c<2;c++){
    
    printf("%d",num4[r][c]);
    
    num4 [r] [c]++;
    
        
       }
    }
     
      printf("\n\n");
      
     /*Four the question explantion about number,my logical programming is +.*/
     
      printf("Four\n");
      
     for(r=0;r<4;r++){
        printf("\n");
    for(c=0;c<2;c++){
    
    num5 [r] [c]++;
    
    printf("+ + +\n");
    
        
       }
    } 
    
      
    /*Very much thanks  =)*/
     
    
    return 0;
}