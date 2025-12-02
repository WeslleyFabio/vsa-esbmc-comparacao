#include <assert.h>

int is_index_valid(int index, int size) {
    /* Correct boundary: allow 0 ≤ index < size */
    if (index >= 0 && index < size) {
        return 1;
    }
    return 0;
}

int main(void) {
    int r1 = is_index_valid(0, 10);
    int r2 = is_index_valid(9, 10);
    assert(r1 == 1);  // index 0 is valid
    assert(r2 == 1);  // index 9 is valid
    return 0;
}
