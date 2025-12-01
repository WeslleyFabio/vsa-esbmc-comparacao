#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 10;
    p[1] = 20;
    
    // Modification: Perform operations while memory is still allocated
    p[0] = 30;
    assert(p[0] == 30);
    
    // Fix: Free the memory ONLY after the last access
    free(p);
    
    return 0;
}
