#include <stdio.h>

int binary_search(int arr[], int n, int x) {
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            i = mid + 1;
        } else {
            j = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    int my_arr[] = {20, 30, 40, 50, 70};
    int n = sizeof(my_arr) / sizeof(my_arr[0]);

    int result = binary_search(my_arr, n, 50);

    if (result != -1) {
        printf("Found at index: %d\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}
