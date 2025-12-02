#include <assert.h>

int get_value(int *a, int n, int index) {
    // Fixed: Changed condition to strictly less than n (index < n)
    if (index >= 0 && index < n) {
        return a[index];
    }
    return 0;
}

int main(void) {
    int v[4] = {1, 2, 3, 4};
    int x = get_value(v, 4, 4);
    assert(x == 0);
    return 0;
}