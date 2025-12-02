#include <assert.h>
#include <string.h>

struct Header {
    char tag[4];
    int size;
};

void reset_header(struct Header *h) {
    /* Only clear the tag field, not the entire struct */
    memset(h->tag, 0, sizeof(h->tag));
}

int main(void) {
    struct Header h;
    h.size = 123;
    reset_header(&h);
    assert(h.size == 123);
    return 0;
}
