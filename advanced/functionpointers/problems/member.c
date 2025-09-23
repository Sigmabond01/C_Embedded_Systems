/*We can create a data member inside structure, but we cannot define a function inside it. 
But we can define function pointers which in turn can be used to call the assigned functions.*/

#include <stdio.h>

typedef struct  Rect
{
    /* data */
    int w, h;
    void(*set)(struct Rect*, int, int);
    int (*area)(struct Rect*);
    void(*show)(struct Rect*);
} Rect;

int area(Rect *r) {
    return r->w * r->h;
}

void show(Rect *r) {
    printf("Rectangle width: %d\n", "Rectangle height: %d\n", r->w, r->h);
}

// Function to set width 
// and height (setter)
void set(Rect* r, int w, int h) {
    r->w = w;
    r->h = h;
}

// Initializer/constructor 
// for Rectangle
void constructRect(Rect* r) {
    r->w = 0;
    r->h = 0;
    r->set = set;
    r->area = area;
    r->show = show;
}

int main() {
    // Create a Rectangle object
    Rect r;
    constructRect(&r);

    // Use r as a Rectangle
    r.set(&r, 10, 5);
    r.show(&r);
    printf("Rectangle Area: %d", r.area(&r));
    return 0;
}

/*O/P
Rectangle's Width: 10, Height: 5
Rectangle Area: 50
*/