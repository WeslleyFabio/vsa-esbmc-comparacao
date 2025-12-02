#include <assert.h>

int get_value(int *a, int n, int index) {
    if (0 <= index && index < n) {  // Fix: Changed to 0 <= index && index < n
        return a[index];
    }
    return -1;  // Return an invalid value instead of 0
}

int main(void) {
    int v[4] = {1, 2, 3, 4};
    int x = get_value(v, 4, 5);  // Test the fixed function
    assert(x == -1);
    return 0;
}
