#include<stdio.h>

int sum (int *, int*); /// * value    & address

int  sum (int *x, int *y ){ 
   *x = 4;  // giving a new value 
    return *x + *y ;
}
int main() {
  int a = 7;
  int b = 7 ;
    printf("the sum is : %d \n", sum (&a,&b)); // here we gave the address to a and b
    printf("the value of a is %d ",a);  // hence as it got the address of a and b it can change the values of a and b 
     
  
 return 0;
}