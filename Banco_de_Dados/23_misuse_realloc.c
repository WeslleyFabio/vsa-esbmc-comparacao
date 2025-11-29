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
    free(p);
    q[2] = 3;
    q[3] = 4;
    assert(q[3] == 4);
    free(q);
    return 0;
}
