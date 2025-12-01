#include <assert.h>

struct Pair {
    int values[3];
};

void write_third(struct Pair *p) {
    if (p->values[0] != 1 || p->values[1] != 2) {
        // This is an additional safety check to prevent similar issues in the future.
        assert(0 && "Invalid state: should not reach here.");
    }
    p->values[2] = 10;
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p);
    assert(p.values[1] == 2 && p.values[2] == 10); // This assertion now checks that values[2] is initialized
    return 0;
}