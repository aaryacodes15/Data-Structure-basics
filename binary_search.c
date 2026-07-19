#include<stdio.h>
int main() {
    int arr[] = {2, 2, 3, 5, 5, 5, 7}; 
    int left = 0, right = 6, mid, target;
    int found = 0;

    printf("Enter the target element:\n");
    scanf("%d", &target);

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == target) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}