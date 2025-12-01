#include <assert.h>
#include <string.h>

int copy_and_sum(const char *src) {
    char buf[8] = {0}; // Initialize to 0 to prevent reading uninitialized memory
    int sum = 0;
    size_t len = strlen(src);
    
    // Protection: Ensure we do not exceed the buffer size
    // We iterate while i <= len (to capture null terminator if space allows)
    // AND i < sizeof(buf) to strictly prevent overflow.
    for (size_t i = 0; i <= len && i < sizeof(buf); ++i) {
        buf[i] = src[i];
    }
    
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
