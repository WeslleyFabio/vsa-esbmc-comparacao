#include <assert.h>

int last_element(int *arr, int n) {
    if (n == 0) return -1; // or some other sentinel value
    int last = 0;
    for (int i = 0; i < n; ++i) { // Change <= to <
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
