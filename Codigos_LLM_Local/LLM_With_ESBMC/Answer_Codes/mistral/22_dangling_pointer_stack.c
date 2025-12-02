#include <assert.h>

int *store_address(void) {
    int x = 5;
    static int result; // Change local variable to static
    result = &x;
    return &result;
}

int main(void) {
    int *q = store_address();
    int v = *q;
    assert(v == 5);
    return 0;
}