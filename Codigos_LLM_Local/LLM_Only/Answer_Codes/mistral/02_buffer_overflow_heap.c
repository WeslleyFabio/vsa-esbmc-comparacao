#include <assert.h>
#include <string.h>
#include <stdlib.h>

char *duplicate_prefix(const char *src, size_t n) {
    char *buf = (char *)malloc(n);
    if (!buf) {
        return NULL;
    }
    memcpy(buf, src, n + 1);
    // Free the allocated memory after usage.
    free(buf);
    buf = (char *)malloc(n);
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
    // Assign the returned pointer to a new variable before freeing it.
    char *temp = p;
    free(temp);
    p = duplicate_prefix(s, strlen(s) + 1);
    assert(p != NULL);
    return 0;
}
