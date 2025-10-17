#include<stdio.h>
int main() {
    // For character
     char i = 'A';
     
     char *u = &i;  // u is a chracter pointer 

     printf("the address of i is %p\n", &i);   // & means the address
     printf("the address of i is %p\n",u); // u is the pointer to tell the address
     printf("The value of u is %d \n", *u);  // *u tells the value stored in u that is i that is 'A'
     printf("the value at u is %d\n", * (&i));  // *(&i) is equal to *u

    
    printf("\n");
    
    // For float
     float j = 2.3;
     
    float *v = &j; // v is the float pointer 
     
     printf("the address of j is %p\n", &j);  // & means the address
     printf("the address of j is %p\n",v);  // v is the pointer to tell the address
     printf("The value of v is %.2f \n", *v); // *v tells the value stored in v that is j that is 2.3
     printf("the value at v is %.2f\n", * (&j));  // *(&j) is equal to *v

     
  
 return 0;
}
 