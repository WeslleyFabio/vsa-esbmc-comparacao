#include <assert.h>

struct Pair {
    int values[3]; // Increased size from 2 to 3 to accommodate 3 elements
};

void write_third(struct Pair *p) {
    p->values[2] = 10; // This is now a valid access (index 0, 1, 2)
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p);
    assert(p.values[1] == 2);
    return 0;
}