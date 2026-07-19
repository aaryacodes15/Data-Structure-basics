#include<stdio.h>
int main (){
    int a[10];
    int max , min ;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter elements :\n");
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i]  < min)
        {
            min = a[i];
        }
        
    }
    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d",min);
    
    return 0;
}