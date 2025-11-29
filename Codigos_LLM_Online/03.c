#include <assert.h>

int last_element(int *arr, int n) {
    int last = 0;
    /* Iterate only over valid indices: 0 .. n-1 */
    for (int i = 0; i < n; ++i) {
        last = arr[i];
    }
    return last;
}

int main(void) {
    int data[4] = {1, 2, 3, 4};
    int v = last_element(data, 4);
    assert(v == 4);
    return 0;
}
