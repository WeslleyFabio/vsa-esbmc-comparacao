#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }

    p[0] = 10;
    p[1] = 20;

    /* Use the allocated memory while it is still valid */
    p[0] = 30;
    assert(p[0] == 30);

    /* Now it is safe to free */
    free(p);
    p = NULL;  /* optional: avoid accidental reuse */

    return 0;
}
