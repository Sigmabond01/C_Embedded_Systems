/*data types are just a representation of data in C (how much memory can be allocated and what datat type can be stored)
In the above variable declaration, a is the identifier, and int is the data type.
every variable gets memory allocation, and the integer variable occupies 2 bytes (or 4 bytes) of memory
Decimal values are not allowed (-15 and 17 OK, 12.38 NOT OK)

Primitive Data Types: Integer, character, float, void. All these are called primitive data types.
Derived Data Types: Array, String, Pointer, etc., come under derived data types.
User-Defined Data Types: Structure, union, typedef, enum, etc., comes under user-defined data types.

Primitive data types are
int,float,double,char

int : has 3 types -  short, int, long
Again, the short data type is divided into two types, i.e., signed short and unsigned short(2 byte)
Same for int and long, i.e., signed int, unsigned int(2 or 4 bytes) and signed long, and unsigned long(4 byte)

float:The Float Data Type in C language is divided into three types: float type, double, and the last one is long double. 
Float is of size 4 bytes; double is of size 8 bytes; long double is of size 10 bytes.

char: The Character Data Type in C language is divided into two types.
One is a signed character, and the second is an unsigned one. Both are of size 1 byte

double: The Float Data Type in C language is divided into three types: float type, double, and the last one is long double.
Float is of size 4 bytes; double is of size 8 bytes; long double is of size 10 bytes */

#include <stdio.h>
int main()
{
    int a = 4000;   // positive integer data type
    float b = 5.2324;   // float data type
    char c = 'Z';   // char data type
    long d = 41657;   // long positive integer data type
    long e = -21556;   // long -ve integer data type
    int f = -185;   // -ve integer data type
    short g = 130;   // short +ve integer data type
    short h = -130;   // short -ve integer data type
    double i = 4.1234567890;  // double float data type
    float j = -3.55;   // float data type
}