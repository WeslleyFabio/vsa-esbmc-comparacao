#include <assert.h>

int max_of_two(int a, int b) {
    if (a >= b) { // Change '==' to '>='
        return a;
    }
    return b;
}

int main(void) {
    int m = max_of_two(3, 5);
    assert(max_of_two(m, 5) == 5); // Now this assertion is guaranteed to be true
    return 0;
}