#include <assert.h>

int last_element(int *arr, int n) {
    if (n <= 0) { // add a check for invalid input size
        return -1; // or any other sentinel value to indicate error
    }
    int last = arr[0];
    for (int i = 1; i < n; ++i) {
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
