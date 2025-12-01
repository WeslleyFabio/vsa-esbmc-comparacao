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
    // Move the assert statement before freeing memory
    assert(p[0] == 30 && p[1] == 20);
    return 0;
}
