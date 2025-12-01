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
    assert(a->value == 42);
    struct Node *b = malloc(sizeof(struct Node));
    if (!b) {
        free(a);
        return 1;
    }
    b->value = a->value;
    free(a);
    assert(b->value == 42);
    free(b);
    return 0;
}
