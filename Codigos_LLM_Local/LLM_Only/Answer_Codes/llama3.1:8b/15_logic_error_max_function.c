#include <assert.h>

int max_of_two(int a, int b) {
    if (a > b) { // Corrected condition to ensure return value is correct
        return a;
    }
    return b;
}

int main(void) {
    int m = max_of_two(3, 5);
    assert(m == 5);
    return 0;
}