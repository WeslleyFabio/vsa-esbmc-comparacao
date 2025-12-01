#include <assert.h>

int max_of_two(int a, int b) {
    if (a < b) {
        return b;  // return the larger value
    }
    return a;
}

int main(void) {
    int m = max_of_two(3, 5);
    assert(m == 5);
    return 0;
}
