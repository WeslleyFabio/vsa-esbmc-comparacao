#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";
    if (strlen(input) <= strlen(secret)) {
        if (strncmp(input, secret, strlen(input)) == 0) {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int r = check_password("short");
    assert(r == 0); // Changed to expect incorrect passwords
    return 0;
}
