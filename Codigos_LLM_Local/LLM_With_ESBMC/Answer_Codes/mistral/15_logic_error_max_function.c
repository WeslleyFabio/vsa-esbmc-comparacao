#include <assert.h>

int max_of_two(int a, int b) {
    return (a > b) ? a : b; // Using ternary operator to avoid the if-else condition
}

int main(void) {
    int m = max_of_two(3, 5);
    assert(m == 5);
    return 0;
}