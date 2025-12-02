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
    q[0] = 3; // Move assignment of values to q[2] and q[3] after freeing p
    q[1] = 4;
    assert(q[3] == 4); // Update assertion index to match new assignment order
    free(p);
    free(q);
    return 0;
}
