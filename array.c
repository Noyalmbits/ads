#include <stdio.h>
int main() 
{
    int num, i,arr[num], max = arr[0];
    printf("Enter the number of elements:\n ");
    if (scanf("%d", &num)!=1||num<= 0)
    {
        printf("Invalid array size");
    } 
    printf("Enter %d elements\n", num);
    for (i = 0; i < num; i++) 
    {
        printf("Element %d: \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < num; i++) 
    {
        if (arr[i] > max)
         {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d", max);

    return 0;
}

