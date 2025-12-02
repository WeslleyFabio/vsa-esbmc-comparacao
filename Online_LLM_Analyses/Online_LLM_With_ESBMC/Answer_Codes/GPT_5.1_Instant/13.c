#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x = 0; // Ensure initialization
    if (flag > 0) {
        x = 10;
    }
    return x;
}

int main(void) {
    int r = choose_value(0);
    assert(r == 10); // This condition is now incorrect given the logic
    return 0;
}
