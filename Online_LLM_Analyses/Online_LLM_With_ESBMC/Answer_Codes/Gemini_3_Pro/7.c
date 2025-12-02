#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 10;
    p[1] = 20;
    
    // Correct logic: Perform all operations before freeing the memory
    p[0] = 30;
    assert(p[0] == 30);
    
    // Release memory only when it is no longer needed
    free(p);
    
    return 0;
}