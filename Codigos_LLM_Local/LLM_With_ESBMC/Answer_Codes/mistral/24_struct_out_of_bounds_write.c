#include <assert.h>

struct Pair {
    int values[3]; // Changed array size to 3
};

void write_third(struct Pair *p) {
    p->values[2] = 10; // No changes here, the original logic is preserved
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p);
    assert(p.values[1] == 2);
    return 0;
}