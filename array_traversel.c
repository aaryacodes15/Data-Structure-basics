#include<stdio.h>
void display(int aar[10],int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", aar[i]); 
    }
    printf("\n");
}
int main ()
{
    int arr[10] = {984,6586,78,59,596};
    display(arr , 5);
    return 0;

}