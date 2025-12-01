#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x = 0; // Fix 1: Initialize x to a safe default to prevent UB
    if (flag > 0) {
        x = 10;
    }
    return x;
}

int main(void) {
    // Fix 2: Pass a value > 0 so the logic path for '10' is taken
    // Alternatively, one could change the assertion if 0 was the intended result.
    int r = choose_value(1); 
    assert(r == 10);
    return 0;
}
