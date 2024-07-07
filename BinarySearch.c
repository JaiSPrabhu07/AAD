// Binary Search
#include <stdio.h>

void binarysearch(int key) {
    int arr[9] = {1, 12, 23, 34, 45, 56, 67, 78, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = size - 1;
    int mid = left + (right - left) / 2;

    if (key == arr[mid]) {
        printf("Element %d found\n", key);
    } else if (key < arr[mid]) {
        int found = 0;
        for (int i = 0; i <= mid - 1; i++) {
            if (key == arr[i]) {
                printf("Element %d found\n", key);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Element %d not found\n", key);
        }
    } else if (key > arr[mid]) {
        int found = 0;
        for (int i = mid + 1; i <= size - 1; i++) {
            if (key == arr[i]) {
                printf("Element %d found\n", key);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Element %d not found\n", key);
        }
    } else {
        printf("Element %d not found\n", key);
    }
}

int main() {
    binarysearch(45);
    return 0;
}
