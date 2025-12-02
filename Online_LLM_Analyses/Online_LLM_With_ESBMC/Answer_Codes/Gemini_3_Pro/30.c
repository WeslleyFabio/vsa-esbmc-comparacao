#include <assert.h>
#include <stdlib.h>

struct Node {
    int value;
};

int main(void) {
    struct Node *a = (struct Node *)malloc(sizeof(struct Node));
    
    // It is safer to check allocation before assigning aliases, 
    // though the critical fix is removing the second free.
    if (!a) {
        return 1;
    }

    struct Node *b = a;

    a->value = 42;
    assert(b->value == 42);

    free(a);
    // free(b); REMOVED: b points to the same address as a, so it is already freed.
    
    return 0;
}