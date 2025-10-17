#include<stdio.h>

int sum (int, int);

int sum (int x, int y ){

    return x + y ;
}
int main() {
     printf("The sum is : %d", sum (7,4));// 7 and 4 got copied in x and y 
                                  // then they return x+y
 return 0;                     // so here we sent 7 and 4 to x and y 
}                           // and 7and 4 are values 