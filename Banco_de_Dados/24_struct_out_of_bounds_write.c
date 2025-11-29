#include <assert.h>

struct Pair {
    int values[2];
};

void write_third(struct Pair *p) {
    p->values[2] = 10;
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p);
    assert(p.values[1] == 2);
    return 0;
}
