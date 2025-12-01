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
    // Free 'p' before assigning new values to 'q'
    free(p);
    
    q[0] = 3;
    q[1] = 4;
    assert(q[1] == 4); // Use q[1] instead of q[3]
    free(q);
    return 0;
}