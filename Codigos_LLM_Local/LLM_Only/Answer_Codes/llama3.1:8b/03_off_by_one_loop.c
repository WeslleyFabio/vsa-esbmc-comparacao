#include <assert.h>

int last_element(int *arr, int n) {
    if (n <= 0) return -1; // or some other error value
    int last = arr[n-1];
    return last;
}

int main(void) {
    int data[4] = {1, 2, 3, 4};
    int v = last_element(data, 4);
    assert(v == 4);
    return 0;
}