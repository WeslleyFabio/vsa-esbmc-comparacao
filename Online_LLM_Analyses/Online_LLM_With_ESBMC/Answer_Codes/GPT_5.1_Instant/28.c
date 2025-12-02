#include <assert.h>
#include <string.h>

struct Buffer {
    char data[8];
    int flag;
};

void fill_buffer(struct Buffer *b, const char *src) {
    memcpy(b->data, src, sizeof(b->data));  // copy only into the data array
}

int main(void) {
    struct Buffer b;
    b.flag = 1;
    fill_buffer(&b, "ABCDEFGH");
    assert(b.flag == 1);
    return 0;
}
