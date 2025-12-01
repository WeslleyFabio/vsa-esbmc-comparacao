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
    buf = NULL; // Set buf to NULL after freeing it to avoid further usage.
    if (buf != NULL) {
        // Since buf is set to NULL after free, this condition will never be true.
    }
    return 0;
}
