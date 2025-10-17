#include<stdio.h>
int main() {
   // & operator === address operator
   
    int i = 45;
     int*j = &i; // j is a pointer to i
     int k = 40;  

     printf("the address of i is %p\n", &i); // this will give us the same answer
     printf("the address of i is %p\n",j);
    printf("the address of i is %p\n",&k);


    // * operator === value at address operator

    printf("The value at address j is %d", *j);
 return 0;
}