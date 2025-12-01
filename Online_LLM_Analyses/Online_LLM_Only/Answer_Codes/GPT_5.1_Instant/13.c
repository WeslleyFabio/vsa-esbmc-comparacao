#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x = 0;          // Ensure x is always initialized
    if (flag > 0) {
        x = 10;
    }
    return x;
}

int main(void) {
    int r = choose_value(0);
    assert(r == 10);    // Adjust expectation or flag to meet logic
    return 0;
}
