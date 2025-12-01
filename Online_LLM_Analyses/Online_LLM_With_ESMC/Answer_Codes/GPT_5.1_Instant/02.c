#include <assert.h>
#include <string.h>
#include <stdlib.h>

char *duplicate_prefix(const char *src, size_t n) {
    /* allocate n + 1 bytes to store n chars plus '\0' */
    char *buf = (char *)malloc(n + 1);
    if (!buf) {
        return NULL;
    }
    memcpy(buf, src, n);
    buf[n] = '\0';  /* ensure null-termination */
    return buf;
}

int main(void) {
    const char *s = "hello world";
    char *p = duplicate_prefix(s, 5);
    assert(p != NULL);
    free(p);
    return 0;
}
