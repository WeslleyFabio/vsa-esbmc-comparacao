#include <assert.h>

struct Pair {
    int values[3]; // Increased size of the array to accommodate the third element.
};

void write_third(struct Pair *p) {
    p->values[2] = 10;
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p);
    assert(p.values[2] == 10); // Updated assertion to reflect the correct index.
    return 0;
}