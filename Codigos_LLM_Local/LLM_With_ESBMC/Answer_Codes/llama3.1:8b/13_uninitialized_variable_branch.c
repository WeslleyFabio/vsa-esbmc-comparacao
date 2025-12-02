#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x;
    if (flag > 0) {
        x = 10;
    } else {
        // Initialize x to a valid value or error code
        x = -1; // or some other meaningful default value
    }
    return x;
}

int main(void) {
    int r = choose_value(0);
    assert(r == -1); // or the expected default value
    return 0;
}
