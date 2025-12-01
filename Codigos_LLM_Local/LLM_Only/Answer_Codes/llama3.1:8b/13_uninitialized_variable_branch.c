#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x;
    if (flag > 0) {
        x = 10; // return a valid value when flag is positive
    } else {
        x = -1; // or any other invalid value to indicate error
    }
    return x;
}

int main(void) {
    int r = choose_value(0);
    assert(r == -1); // update assertion to match the new behavior
    return 0;
}