#include<stdio.h>
int main(){
    int arr[] = {7,3,5,2,5,2,5} , left = 0 ,right  = 6, mid , target  ;
    
    
    printf("Enter the target element : \n");
    scanf("%d",&target);
    while (left <= right)
    {
        mid = (right + left)/2;
    }
    if (arr[mid] == target)
    {
        printf("Found at index %d",mid);
    }
    else if (arr[mid] < target)
    {
        left = mid + 1;
    }
    else{
        right = mid - 1;
    }
    printf("Not found");

    return 0;
}
