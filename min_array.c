#include<stdio.h>
int main (){
    int a[10];
    int  min ;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter elements :\n");
        scanf("%d",&a[i]);
    }
    min = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        
    }
    printf("The miniimum number is %d",min);
    
    return 0;
}