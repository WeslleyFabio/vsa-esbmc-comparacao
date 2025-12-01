#include <assert.h>

int is_even(int x) {
    if (x % 2 == 0) {
        return 1;   // return true for even numbers
    }
    return 0;       // return false for odd numbers
}

int main(void) {
    int r = is_even(4);
    assert(r == 1); // now consistent with function logic
    return 0;
}
