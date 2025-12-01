#include <assert.h>

struct Pair {
    int values[2];
};

void write_third(struct Pair *p) {
    /* Removed invalid out-of-bounds write.
       If a third value is conceptually needed, the struct must be changed.
       Here we simply avoid the invalid access. */
    (void)p; // no-op to preserve original structure
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p);
    assert(p.values[1] == 2);
    return 0;
}
