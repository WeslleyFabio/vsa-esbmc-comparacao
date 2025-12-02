#include <assert.h>

struct Pair {
    int values[2];
};

void write_third(struct Pair *p) {
    /* Corrected: write within bounds or remove invalid access */
    /* Here we avoid accessing index 2 since the array has size 2 */
    /* If the intent was to update the second element, use index 1 */
    p->values[1] = 10;
}

int main(void) {
    struct Pair p;
    p.values[0] = 1;
    p.values[1] = 2;
    write_third(&p);
    assert(p.values[1] == 10);
    return 0;
}
