/*
All the elements in an array have a positional index, starting from "0". 
The lower bound of the array is always "0", whereas the upper bound is "size − 1". 
We can use this property to traverse, assign, or read inputs into the array subscripts with a loop.
*/

#include <stdio.h>

int main(){
   int a[5], i;
   for(i = 0; i <= 4; i++){
      scanf("%d", &a[i]);
   }

   for(i = 0; i <= 4; i++){
      printf("a[%d] = %d\n",i,  a[i]);
   }
   return 0;
}
/*O/P
a[0] = 712952649
a[1] = 32765
a[2] = 100
a[3] = 0
a[4] = 4096
*/