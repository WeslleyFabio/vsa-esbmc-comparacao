#include <assert.h>
#include <string.h>

int copy_and_sum(const char *src) {
    char buf[8];
    int sum = 0;
    size_t len = strlen(src);

    /* Copy at most sizeof(buf) - 1 bytes and always null-terminate */
    size_t to_copy = (len < sizeof(buf) - 1) ? len : (sizeof(buf) - 1);
    for (size_t i = 0; i < to_copy; ++i) {
        buf[i] = src[i];
    }
    buf[to_copy] = '\0';

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
