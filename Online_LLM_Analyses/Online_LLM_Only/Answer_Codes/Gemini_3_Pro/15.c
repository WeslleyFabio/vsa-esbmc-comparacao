#include <assert.h>

int max_of_two(int a, int b) {
    // Corrected condition to return the larger value
    if (a > b) {
        return a;
    }
    return b;
}

int main(void) {
    int m = max_of_two(3, 5);
    assert(m == 5);
    return 0;
}
