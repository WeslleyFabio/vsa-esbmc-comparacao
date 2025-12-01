#include <assert.h>
#include <string.h>

struct Header {
    char tag[4];
    int size;
};

void reset_header(struct Header *h) {
    // Fix: Only reset the tag array, preserving the size member
    memset(h->tag, 0, sizeof(h->tag));
}

int main(void) {
    struct Header h;
    h.size = 123;
    reset_header(&h);
    // The assertion now holds because size was not overwritten
    assert(h.size == 123);
    return 0;
}
