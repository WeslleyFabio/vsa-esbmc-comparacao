#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 1;
    p[1] = 2;

    // realloc acts on p. If successful, it frees p automatically.
    int *q = (int *)realloc(p, 4 * sizeof(int));
    
    if (q == NULL) {
        // If realloc fails, the original p is still valid and must be freed manually.
        free(p); 
        return 1;
    }

    // REMOVED: free(p); 
    // Reason: realloc already freed 'p' when it returned 'q'. 
    
    q[2] = 3;
    q[3] = 4;
    assert(q[3] == 4);
    
    free(q); // Free the new pointer
    return 0;
}