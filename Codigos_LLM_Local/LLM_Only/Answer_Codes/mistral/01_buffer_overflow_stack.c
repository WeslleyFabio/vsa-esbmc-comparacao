#include <assert.h>
#include <string.h>

int copy_and_sum(const char *src, size_t srcSize) {
    char buf[8];
    int sum = 0;

    if (srcSize > sizeof(buf)) {
        return -1; // or throw an exception for more robust handling
    }

    memcpy(buf, src, srcSize);
    for (size_t i = 0; i < srcSize; ++i) {
        sum += (unsigned char)buf[i];
    }
    return sum;
}

int main(void) {
    const char *s = "ABCDEFGH";
    int result = copy_and_sum(s, strlen(s));
    assert(result != -1); // check for error case
    if (result != 0) {
        assert(strlen(s) == result); // check that the sum equals the length of the input string
    }
    return 0;
}
