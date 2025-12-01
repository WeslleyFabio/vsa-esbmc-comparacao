#include <assert.h>
#include <string.h>
#include <stdlib.h>

char *duplicate_prefix(const char *src, size_t n) {
    size_t src_len = strlen(src);
    if (n > src_len) {
        n = src_len;
    }
    char *buf = (char *)malloc(n + 1); // allocate space for the null terminator
    if (!buf) {
        return NULL;
    }
    memcpy(buf, src, n + 1);
    return buf;
}

int main(void) {
    const char *s = "hello world";
    char *p = duplicate_prefix(s, 5);
    assert(p != NULL);
    free(p);
    return 0;
}