#include <assert.h>
#include <string.h>

struct Buffer {
    char data[9];  // Increased size to match the source string length
    int flag;
};

void fill_buffer(struct Buffer *b, const char *src) {
    memcpy(b->data, src, sizeof(*b));
}

int main(void) {
    struct Buffer b;
    b.flag = 1;
    fill_buffer(&b, "ABCDEFGH");
    assert(b.flag == 1);
    return 0;
}
