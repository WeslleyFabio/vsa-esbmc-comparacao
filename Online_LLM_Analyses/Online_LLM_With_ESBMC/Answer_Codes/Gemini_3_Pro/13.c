#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x = 10; // Fix: Initialize x to a default value
    if (flag > 0) {
        x = 10;
    }
    return x;
}

int main(void) {
    int r = choose_value(0);
    assert(r == 10);
    return 0;
}