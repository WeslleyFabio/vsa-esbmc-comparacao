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
    // Introduce a buffer to hold the new value
    int newValue = 30;
    assert(newValue == 30);
    return 0;
}