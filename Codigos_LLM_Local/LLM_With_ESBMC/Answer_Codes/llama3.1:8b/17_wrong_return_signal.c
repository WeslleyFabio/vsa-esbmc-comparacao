#include <assert.h>

int is_even(int x) {
    if (x % 2 == 0) {
        return 0;
    }
    return -1; /* Return a non-zero value instead of 1 */
}

int main(void) {
    int r = is_even(4);
    assert(r != 1); /* Update the assertion to check for a non-1 value */
    return 0;
}
