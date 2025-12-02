#include <assert.h>
#include <stdlib.h>

int main(void) {
    // FIX: Allocate enough memory for 4 integers (indices 0 to 3)
    int *base = (int *)malloc(4 * sizeof(int));
    if (!base) {
        return 1;
    }
    
    // Now p points to a valid memory location (index 3) inside the block
    int *p = base + 3;
    p[0] = 10;
    
    assert(p[0] == 10);
    free(base);
    return 0;
}