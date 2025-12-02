#include <assert.h>
#include <stdlib.h>

struct Node {
    int value;
};

int main(void) {
    struct Node *a = (struct Node *)malloc(sizeof(struct Node));
    if (!a) {
        return 1;
    }
    a->value = 42;
    struct Node *b = a; // copy the pointer, do not assign the same pointer
    assert(b->value == 42);
    free(a); // free 'a' first
    b = NULL; // set 'b' to NULL after freeing 'a'
    free(b); // now it's safe to free 'b'
    return 0;
}
