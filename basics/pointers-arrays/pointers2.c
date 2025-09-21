//We can use this property of the pointer to traverse the array element with the help of a pointer.
/*
to run this program,
cd basics/pointers-arrays
gcc pointers2.c -o point2
.\point.exe
*/
#include <stdio.h>

int main(){
    
   int arr[5] = {1, 2, 3, 4, 5};
   int *b = arr;

   printf("Address of a[0]: %d value at a[0] : %d\n",b, *b);
    
   b++;
   printf("Address of a[1]: %d value at a[1] : %d\n", b, *b);

   b++;
   printf("Address of a[2]: %d value at a[2] : %d\n", b, *b);

   b++;
   printf("Address of a[3]: %d value at a[3] : %d\n", b, *b);
    
   b++;
   printf("Address of a[4]: %d value at a[4] : %d\n", b, *b);

   return 0;
}

/*O/P
address of a[0]: 6422016 value at a[0] : 1
address of a[1]: 6422020 value at a[1] : 2
address of a[2]: 6422024 value at a[2] : 3
address of a[3]: 6422028 value at a[3] : 4
address of a[4]: 6422032 value at a[4] : 5
*/