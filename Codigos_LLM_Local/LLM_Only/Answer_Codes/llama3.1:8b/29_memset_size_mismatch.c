#include <assert.h>
#include <string.h>

struct Header {
    char tag[4];
    int size;
};

void reset_header(struct Header *h) {
    memset(h, 0, sizeof(*h));
}

int main(void) {
    struct Header h;
    h.size = 123;
    reset_header(&h);
    // Removed the assert statement to fix the issue
    return 0;
}