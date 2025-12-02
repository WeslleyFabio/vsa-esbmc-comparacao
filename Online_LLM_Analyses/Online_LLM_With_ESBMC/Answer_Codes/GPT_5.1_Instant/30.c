#include <assert.h>
#include <stdlib.h>

struct Node {
    int value;
};

int main(void) {
    struct Node *a = (struct Node *)malloc(sizeof(struct Node));
    struct Node *b = a;

    if (!a) {
        return 1;
    }

    a->value = 42;
    assert(b->value == 42);

    /* Free only once since a and b alias the same object */
    free(a);
    /* Prevent accidental use */
    a = NULL;
    b = NULL;

    return 0;
}
