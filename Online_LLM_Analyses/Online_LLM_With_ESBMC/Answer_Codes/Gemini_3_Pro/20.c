#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";

    // Fix: Check that lengths are strictly equal first
    if (strlen(input) != strlen(secret)) {
        return 0;
    }

    // Fix: Use strcmp to compare the entire string (or strncmp with the full length)
    if (strcmp(input, secret) == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int r = check_password("secret");
    assert(r == 1);
    return 0;
}