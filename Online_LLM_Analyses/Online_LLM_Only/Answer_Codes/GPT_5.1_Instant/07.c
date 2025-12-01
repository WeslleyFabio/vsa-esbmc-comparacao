#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 10;
    p[1] = 20;

    /* Use the memory before freeing it */
    p[0] = 30;
    assert(p[0] == 30);

    /* Now it is safe to free and stop using the pointer */
    free(p);
    p = NULL;  /* defensive nullification */

    return 0;
}
