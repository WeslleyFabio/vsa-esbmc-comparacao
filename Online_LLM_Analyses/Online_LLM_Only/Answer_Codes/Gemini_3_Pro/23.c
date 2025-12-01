#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 1;
    p[1] = 2;

    // realloc automatically frees 'p' if the allocation is successful and memory moves
    int *q = (int *)realloc(p, 4 * sizeof(int));
    
    // Check for realloc failure
    if (q == NULL) {
        // Only free 'p' if realloc FAILED and returned NULL
        free(p);
        return 1;
    }

    // Do NOT free(p) here. 'p' is now invalid.
    
    q[2] = 3;
    q[3] = 4;
    assert(q[3] == 4);
    
    free(q); // Frees the current valid pointer
    return 0;
}
