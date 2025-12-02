#include <assert.h>
#include <string.h>
#include <stdlib.h>

char *duplicate_prefix(const char *src, size_t n) {
    if (n > strlen(src)) {
        n = strlen(src);
    }
    char *buf = (char *)malloc(n + 1);
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
