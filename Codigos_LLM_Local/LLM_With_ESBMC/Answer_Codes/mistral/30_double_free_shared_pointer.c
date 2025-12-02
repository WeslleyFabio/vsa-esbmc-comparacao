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
    b = NULL; // Freeing the memory by setting it to NULL before free(b)
    free(a);
    free(b);
    return 0;
}
