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

    struct Node *b = a;  // alias, do not free twice

    a->value = 42;
    assert(b->value == 42);

    free(a);
    /* b should not be freed because it aliases a */

    return 0;
}
