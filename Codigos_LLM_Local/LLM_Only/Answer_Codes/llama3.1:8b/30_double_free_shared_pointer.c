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
    struct Node *b = a; // no need to allocate new memory for b
    a->value = 42;
    assert(b->value == 42);
    free(a); // now it's safe to free 'a' and 'b'
    free(b);
    return 0;
}