#include <assert.h>
#include <string.h>
#include <stdlib.h>

char *duplicate_prefix(const char *src, size_t n) {
    // Allocate space for n characters plus the null terminator
    char *buf = (char *)malloc(n + 1);
    if (!buf) {
        return NULL;
    }
    // Copy only n characters
    memcpy(buf, src, n);
    // Explicitly null-terminate the string
    buf[n] = '\0';
    return buf;
}

int main(void) {
    const char *s = "hello world";
    char *p = duplicate_prefix(s, 5);
    assert(p != NULL);
    free(p);
    return 0;
}