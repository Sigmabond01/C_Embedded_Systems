/*The void is an empty data type with no value or operations. 
This can be used in functions and pointers. It’s a data type that represents the lack of a data type.
Many programming languages need a data type to define the lack of return value to indicate that nothing is being returned.

Uses of Void Data type in C:
The function returns as void.
Function arguments as void.
Pointers to void.

*/

//When used as a function return type, the void keyword specifies that the function does not return a value.
void show()
{
    printf("This function has no return type");
}

//When used for a function’s parameter list, void specifies that the function takes no parameters.
int sum(void)
{
    int a,b;
    printf("Enter Two number>> ");
    scanf("%d %d",&a,&b);
    return a+b;
}

//When used to declare a pointer, void specifies that the pointer is “universal.”
void main()
{
    void *p;
    int a=10;
    char b='A';
    float c=9.19;
    p=&a;
    printf("\nPrinting Integer data %d",(*(int *)p));
    p=&b;
    printf("\nPrinting character data %c",(*(char *)p));
    p=&c;
    printf("\nPrinting float data %f",(*(float *)p));
}