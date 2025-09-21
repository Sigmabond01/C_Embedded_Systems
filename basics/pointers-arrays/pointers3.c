//We can use this property and use a loop to traverse the array with the dereference operator.
/*
to run this program,
cd basics/pointers-arrays
gcc pointers3.c -o point3
.\point3.exe
*/
#include <stdio.h>

int main(){

   int arr[5] = {1, 2, 3, 4, 5};
   int *b = arr;
   int i;

   for(i = 0; i <= 4; i++){
      printf("a[%d] = %d\n",i,  *(b+i));
   }
   
   return 0;
}

/*O/P
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5
*/