#include <assert.h>
#include <stdlib.h>

int first_char_is_a(const char *s) {
    if (s != NULL && s[0] == 'a') {
        return 1;
    }
    return 0;
}

int main(void) {
    char *p = malloc(1); // Allocate memory for p
    assert(p != NULL);
    int r = first_char_is_a(p);
    free(p); // Free the allocated memory after usage
    assert(r == 0);
    return 0;
}
