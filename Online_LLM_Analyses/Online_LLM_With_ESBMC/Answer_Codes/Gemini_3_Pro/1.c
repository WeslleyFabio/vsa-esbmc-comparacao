#include <assert.h>
#include <string.h>

int copy_and_sum(const char *src) {
    // Fix: Increased buffer size to 9 to accommodate 8 characters + null terminator
    char buf[9]; 
    int sum = 0;
    size_t len = strlen(src);

    // Guard: Ensure we do not exceed the buffer size even if logic dictates
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