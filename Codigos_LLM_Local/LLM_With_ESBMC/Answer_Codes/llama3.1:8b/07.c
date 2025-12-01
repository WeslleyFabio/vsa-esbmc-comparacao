#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 10;
    p[1] = 20;
    free(p);
    
    // Introduce a new pointer to avoid use-after-free
    int *q = malloc(sizeof(int));
    q[0] = 30;
    assert(q[0] == 30);
    return 0;
}