#include <assert.h>

int is_even(int x) {
    if (x % 2 == 0) {
        return 0; // Corrected here
    }
    return 1;
}

int main(void) {
    int r = is_even(4);
    assert(r == 0); // Corrected here
    return 0;
}