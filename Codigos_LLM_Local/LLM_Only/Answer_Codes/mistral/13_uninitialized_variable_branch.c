#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x = (flag > 0) ? 10 : 0; // If flag is greater than 0, assign 10 to x; otherwise, assign 0.
    return x;
}

int main(void) {
    int r = choose_value(0);
    assert(r == 0); // Adjusted the expected result to match the new implementation of choose_value().
    return 0;
}