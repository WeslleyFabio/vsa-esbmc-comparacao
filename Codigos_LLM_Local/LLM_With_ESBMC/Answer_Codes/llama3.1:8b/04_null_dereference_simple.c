#include <assert.h>
#include <stdlib.h>

int first_char_is_a(const char *s) {
    if (s == NULL || s[0] != 'a') {
        return 0;
    }
    return 1;
}

int main(void) {
    char *p = NULL;
    int r = first_char_is_a(p);
    assert(r == 0);
    return 0;
}
