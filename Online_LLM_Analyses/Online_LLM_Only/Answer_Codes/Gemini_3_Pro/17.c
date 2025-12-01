#include <assert.h>

int is_even(int x) {
    if (x % 2 == 0) {
        return 1; // Return 1 (true) if even
    }
    return 0;     // Return 0 (false) if odd
}

int main(void) {
    int r = is_even(4);
    assert(r == 1);
    return 0;
}
