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
    struct Node *b = malloc(sizeof(struct Node));
    b->value = 42; // assign value to b
    assert(a->value == 42);
    free(b); // free b before asserting the same value on a
    free(a);
    return 0;
}