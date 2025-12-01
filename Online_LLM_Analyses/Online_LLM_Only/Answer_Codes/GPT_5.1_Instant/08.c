#include <assert.h>
#include <stdlib.h>
#include <limits.h>

int *allocate_and_fill(int n, int value) {
    // Validate n to prevent negative sizes and overflow
    if (n <= 0 || n > INT_MAX / (int)sizeof(int)) {
        return NULL;
    }

    size_t count = (size_t)n;
    int *p = (int *)malloc(count * sizeof(int));
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
    free(data);
    return 0;
}
