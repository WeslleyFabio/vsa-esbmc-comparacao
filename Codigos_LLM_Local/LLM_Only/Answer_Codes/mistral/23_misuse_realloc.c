#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 1;
    p[1] = 2;
    int *q = (int *)realloc(p, 4 * sizeof(int));
    if (q == NULL) {
        free(p);
        return 1;
    }
    p = q;   // Assign the new pointer to 'p' to avoid memory leak.
    p[2] = 3;
    p[3] = 4;
    assert(p[3] == 4);
    free(p);
    return 0;
}
