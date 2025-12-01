#include <assert.h>
#include <stdlib.h>

char *make_buffer(int n) {
    char *p = (char *)malloc((size_t)n);
    return p;
}

int main(void) {
    char *buf = make_buffer(16);
    // Ideally handle allocation failure gracefully in production
    if (buf == NULL) return 1; 
    
    free(buf);
    buf = NULL; // FIX: Set pointer to NULL immediately after freeing

    // The original logic checks if buf is not NULL before freeing again.
    // Since buf is now NULL, this block is safely skipped.
    if (buf != NULL) {
        free(buf);
    }
    return 0;
}
