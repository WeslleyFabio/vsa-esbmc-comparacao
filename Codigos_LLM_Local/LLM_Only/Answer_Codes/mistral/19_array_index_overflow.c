#include <assert.h>

int get_value(int *a, int n, int index) {
    if (index >= 0 && index <= n) {
        return a[index];
    }
    if (n < index) {
        return 0; // or any appropriate error handling
    }
    return -1; // to indicate an error
}

int main(void) {
    int v[4] = {1, 2, 3, 4};
    int x = get_value(v, 4, 4);
    assert(x == 0 || x == -1);
    return 0;
}
