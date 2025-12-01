#include <assert.h>
#include <stdlib.h>

int *allocate_and_fill(int n, int value) {
    if (n <= 0) {
        return NULL;
    }

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

    /* Instead of asserting, check safely */
    if (data == NULL) {
        /* Handle allocation failure gracefully */
        return 1;
    }

    int ok = data[0] == 7;
    assert(ok);

    free(data);
    return 0;
}
