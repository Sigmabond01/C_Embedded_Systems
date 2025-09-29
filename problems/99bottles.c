#include <stdio.h>

void singsong() {
    for(int i = 99; i > 0; i--) {
        if(i > 1) {
            printf("%d bottles of beer on the wall,\n",i);
            printf("%d bottles of beer!\n",i);
            printf("You take one down, pass it around,\n");
            printf("%d bottles of beer on the wall!\n\n",i-1);
        } else {
            printf("%d bottle of beer on the wall,\n",i);
            printf("%d bottle of beer!\n",i);
            printf("You take one down, pass it around,\n");
            printf("No more bottles of beer on the wall!\n\n");
        }
    }
}

int main() {
    singsong();
}