#include <assert.h>

int max_of_two(int a, int b) {
    // Corrected condition: checks if 'a' is greater than 'b'
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