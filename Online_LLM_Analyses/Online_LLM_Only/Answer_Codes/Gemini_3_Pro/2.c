#include <assert.h>
#include <string.h>
#include <stdlib.h>

char *duplicate_prefix(const char *src, size_t n) {
    // Allocate n bytes for content + 1 byte for the null terminator
    char *buf = (char *)malloc(n + 1);
    if (!buf) {
        return NULL;
    }
    
    // Copy exactly n bytes from source
    memcpy(buf, src, n);
    
    // Explicitly add the null terminator at the end
    buf[n] = '\0';
    
    return buf;
}

int main(void) {
    const char *s = "hello world";
    char *p = duplicate_prefix(s, 5);
    assert(p != NULL);
    // p now contains "hello\0"
    free(p);
    return 0;
}
