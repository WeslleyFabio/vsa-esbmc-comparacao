#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";
    if (strlen(input) > strlen(secret)) {
        return 1; // Input is too long, password validation failed
    }
    if (strncmp(input, secret, strlen(input)) != 0) {
        return 1; // Input doesn't match the secret password, password validation failed
    }
    return 0; // Input matches the secret password, password validation passed
}

int main(void) {
    int r = check_password("secret");
    assert(r == 0);
    return 0;
}