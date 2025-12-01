#include <assert.h>

int last_element(int *arr, int n) {
    assert(n > 0); // Added a check for non-empty arrays
    int last = arr[0];
    for (int i = 1; i < n; ++i) {
        if (last < arr[i]) {
            last = arr[i];
        }
    }
    return last;
}

int main(void) {
    int data[4] = {1, 2, 3, 4};
    int v = last_element(data, 4);
    assert(v == 4);
    return 0;
}
