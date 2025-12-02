#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

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

void free_data(int *data, int size) {
    if (data) {
        free(data);
    }
}

int main(void) {
    int *data = allocate_and_fill(4, 7);
    assert(data != NULL);
    int ok = data[0] == 7;
    assert(ok);
    free_data(data, 4);
    return 0;
}
