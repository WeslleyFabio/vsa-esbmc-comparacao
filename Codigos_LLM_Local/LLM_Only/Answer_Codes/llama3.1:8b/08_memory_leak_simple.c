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
    assert(data != NULL);
    if (data != NULL) { // Added check to ensure data is not NULL before accessing it
        int ok = data[0] == 7;
        assert(ok);
    }
    free(data); // Free the allocated memory to avoid memory leak
    return 0;
}