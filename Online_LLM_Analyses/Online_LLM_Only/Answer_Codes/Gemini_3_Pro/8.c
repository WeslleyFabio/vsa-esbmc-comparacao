#include <assert.h>
#include <stdlib.h>

int *allocate_and_fill(int n, int value) {
    // Good practice: protect against non-positive n, though not strictly the leak cause
    if (n <= 0) return NULL;

    int *p = (int *)malloc((size_t)n * sizeof(int));
    if (!p) {
        return NULL;
    }
    for (int i = 0; i < n; ++i) {
        p[i] = value;
    }
    return p;
}

int main(void) {
    int *data = allocate_and_fill(4, 7);
    
    // Ensure allocation succeeded before usage
    assert(data != NULL);
    
    int ok = data[0] == 7;
    assert(ok);
    
    // FIX: Release the allocated memory
    free(data);
    
    return 0;
}
