#include <assert.h>
#include <stdlib.h>

int *allocate_and_fill(int n, int value) {
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
    
    // Fix: Handle allocation failure gracefully
    if (data == NULL) {
        return 0; 
    }

    int ok = data[0] == 7;
    assert(ok);
    
    // Fix: Release the allocated memory
    free(data);
    
    return 0;
}