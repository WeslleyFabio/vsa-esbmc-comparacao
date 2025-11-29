#include <assert.h>
#include <string.h>
#include <stdlib.h>

char *duplicate_prefix(const char *src, size_t n) {
    char *buf = (char *)malloc(n + 1); // Add 1 to account for the null terminator
    if (!buf) {
        return NULL;
    }
    memcpy(buf, src, n);
    buf[n] = '\0'; // Ensure null-termination
    return buf;
}

int main(void) {
    const char *s = "hello world";
    char *p = duplicate_prefix(s, 5);
    assert(p != NULL);
    free(p);
    return 0;
}