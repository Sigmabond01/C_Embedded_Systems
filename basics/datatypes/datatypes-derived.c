/*Derived data types in C Programming Language are those C data types derived from the fundamental data types using some declaration operators
Pointers: Used to store the address of other variables.
Arrays: Used to store a fixed-size sequential collection of elements of the same type.
Structures (struct): Used to group different types of variables under the same name.
Unions (union): Similar to structures, but members share the same memory location.

Arrays: he arrays can be defined as a set of finite and homogeneous data elements.
Each element of an array is referenced using an index.

Pointers: A pointer is a variable that holds the address of the memory space. 
If one variable can hold the address of another variable, then it is said that the first variable points to the second.

Struct: The structure can be defined as a collection or a group of variables referenced under one name.
It is used to keep related information together. We use a ‘struct’ keyword to construct a structure

enumeration: The enumeration data type consists of named integer constants as a list.
It starts with 0 (zero) by default, and the value is incremented by 1 for the sequential identifiers in the list.
The enum data type is a user-defined data type having a finite set of enumeration constants.
The keyword ‘enum’ is used to create an enumerated data type. */

#include <stdio.h>
int main()
{
   enum MONTH 
   {
      Jan = 0, Feb, Mar 
   };
   enum MONTH month = Mar;
   if(month == 0)
   printf("Value of Jan");
   else if(month == 1)
   printf("Month is Feb");
   if(month == 2)
   printf("Month is Mar");
}

//to run this file
//cd basics
//cd datatypes
//gcc datatypes-derived.c -o derived
//.\derived.exe