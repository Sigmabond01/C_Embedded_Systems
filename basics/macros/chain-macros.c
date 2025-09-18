/*
These macros involve chaining multiple macros together. 
This can be done by combining different macros in a single macro definition, allowing for more complex operations.
In chain macros first of all parent macro is expanded then the child macro is expanded.
*/

#include <stdio.h>

#define X FOLLOWERS
#define FOLLOWERS 525

int main() {
    printf("Sigmabond01 has %d" "followers on X", X);
    return 0;
}
//o/p: SIgmabond01 has 525 followers on X
/*
X is expanded first to produce FOLLOWERS. 
Then the expanded macro is expanded to produce the outcome as 525.
This is called the chaining of macros.
*/