#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";
    if (strncmp(input, secret, strlen(secret)) != 0) {
        return 0;
    }
    return 1;
}

int main(void) {
    int r = check_password("secret");
    assert(r == 1);
    return 0;
}