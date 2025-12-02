#include <assert.h>
#include <stdlib.h>

int choose_value(int flag) {
    int x = (flag > 0) ? 10 : 0;
    return x;
}

int main(void) {
    int r = choose_value(0);
    assert(r == 10);
    return 0;
}
