#include <assert.h>
#include <stdlib.h> /* Required for malloc/free */

int *store_address(void) {
    /* Allocate memory on the heap so it survives the function return */
    int *p = (int *)malloc(sizeof(int));
    if (p != NULL) {
        *p = 5;
    }
    return p;
}

int main(void) {
    int *q = store_address();

    /* Always check if allocation succeeded */
    if (q != NULL) {
        int v = *q;
        assert(v == 5);
        
        /* Free the heap memory to prevent leaks */
        free(q);
    }
    return 0;
}
