#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 10;
    p[1] = 20;
    assert(p[0] == 10 && p[1] == 20); // Verifying the state before freeing
    free(p);
    int *q = (int *)malloc(2 * sizeof(int));
    if (!q) {
        return 1;
    }
    q[0] = 30;
    assert(q[0] == 30);
    return 0;
}
