#include <assert.h>

int is_even(int x) {
    if (x % 2 == 0) {
        return 1; // Fixed: Return 1 (True) for even numbers
    }
    return 0; // Fixed: Return 0 (False) for odd numbers
}

int main(void) {
    int r = is_even(4);
    assert(r == 1);
    return 0;
}