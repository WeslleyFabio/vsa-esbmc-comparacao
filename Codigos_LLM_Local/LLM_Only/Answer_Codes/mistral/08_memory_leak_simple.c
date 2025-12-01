#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void free_and_nullify(int *p) {
    if (p != NULL) {
        free(p);
        p = NULL;
    }
}

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
    assert(data != NULL);
    int ok = data[0] == 7;
    assert(ok);
    free_and_nullify(data); // Added free_and_nullify() to free memory after use
    return 0;
}
