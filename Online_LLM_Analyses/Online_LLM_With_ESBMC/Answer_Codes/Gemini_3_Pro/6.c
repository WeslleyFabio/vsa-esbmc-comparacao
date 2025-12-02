#include <assert.h>
#include <stdlib.h>

char *make_buffer(int n) {
    char *p = (char *)malloc((size_t)n);
    return p;
}

int main(void) {
    char *buf = make_buffer(16);
    assert(buf != NULL);
    
    free(buf);
    buf = NULL; // Set pointer to NULL after freeing
    
    // This check will now fail safely, skipping the second free
    if (buf != NULL) {
        free(buf);
    }
    return 0;
}