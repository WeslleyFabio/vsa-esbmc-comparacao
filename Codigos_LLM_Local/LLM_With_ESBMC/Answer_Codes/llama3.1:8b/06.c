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
    // Removed the redundant check and free
    return 0;
}