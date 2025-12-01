#include <assert.h>
#include <stdlib.h>

int *store_address(void) {
    int x = 5;
    int *p = malloc(sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Error: allocation failure\n");
        exit(EXIT_FAILURE);
    }
    *p = x;
    return p;
}

void free_memory(int *ptr) {
    if (ptr != NULL) {
        free(ptr);
    }
}

int main(void) {
    int *q = store_address();
    int v = *q;
    assert(v == 5);
    free_memory(q); // Always remember to free the memory when done using it.
    return 0;
}