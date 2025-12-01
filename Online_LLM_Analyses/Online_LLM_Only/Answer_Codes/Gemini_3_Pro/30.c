#include <assert.h>
#include <stdlib.h>

struct Node {
    int value;
};

int main(void) {
    struct Node *a = (struct Node *)malloc(sizeof(struct Node));
    struct Node *b = a;
    
    // Check for allocation failure
    if (!a) {
        return 1;
    }
    
    a->value = 42;
    assert(b->value == 42);
    
    // Only free the memory once using either pointer
    free(a);
    
    return 0;
}
