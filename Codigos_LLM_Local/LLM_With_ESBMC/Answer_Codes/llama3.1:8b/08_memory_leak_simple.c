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

void free_allocated_memory(int *data, int n) {
    free(data);
}

int main(void) {
    int *data = allocate_and_fill(4, 7);
    assert(data != NULL);
    for (int i = 0; i < 4; ++i) {
        int ok = data[i] == 7;
        assert(ok);
    }
    free_allocated_memory(data, 4); // Free the allocated memory
    return 0;
}
