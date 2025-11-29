#include <assert.h>
#include <string.h>

int copy_and_sum(const char *src) {
    char buf[8];
    int sum = 0;
    size_t len = strlen(src);

    // Limit len to fit into buf with space for terminating null
    if (len > sizeof(buf) - 1) {
        len = sizeof(buf) - 1;
    }

    // Copy only len characters
    for (size_t i = 0; i < len; ++i) {
        buf[i] = src[i];
    }
    // Ensure null-termination within bounds
    buf[len] = '\0';

    // Sum all bytes in the fixed buffer
    for (size_t i = 0; i < sizeof(buf); ++i) {
        sum += (unsigned char)buf[i];
    }
    return sum;
}

int main(void) {
    const char *s = "ABCDEFGH";
    int result = copy_and_sum(s);
    assert(result != 0);
    return 0;
}
