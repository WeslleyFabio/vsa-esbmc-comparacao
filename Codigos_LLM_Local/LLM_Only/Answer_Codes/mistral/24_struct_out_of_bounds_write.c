#include <assert.h>

struct Pair {
    int values[2];
};

void write_third(struct Pair *p, int extra_index) {
    if (extra_index >= 0 && extra_index <= 2) {
        p->values[extra_index] = 10;
    }
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p, 2);
    assert(p.values[1] == 2);
    return 0;
}