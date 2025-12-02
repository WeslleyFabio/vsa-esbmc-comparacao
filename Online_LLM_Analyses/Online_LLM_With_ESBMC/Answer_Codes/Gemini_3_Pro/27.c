#include <assert.h>

int is_index_valid(int index, int size) {
    // FIX: Use >= 0 to include the 0th index, which is valid in C
    if (index >= 0 && index < size) {
        return 1;
    }
    return 0;
}

int main(void) {
    int r1 = is_index_valid(0, 10);
    int r2 = is_index_valid(9, 10);
    
    // FIX: Since 0 is a valid index in C, r1 must be 1.
    // The original assertion (r1 == 0) was enforcing incorrect behavior.
    assert(r1 == 1);
    assert(r2 == 1);
    return 0;
}