#include <stdio.h>
/*
 * Bubble Sort
 * Algorithms Lab CSE 2032.2
*/
int main()
{
    int array[100], n, i, j, temp, c, swappedFlag;

    printf("Enter the number of elements to sort: ");
    scanf("%d",&n);

    printf("Input the numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    // Bubble Sort (Unoptimized)
    for(i=1; i<=n-1; i++)
    {
        swappedFlag = 0;
        for(j=0; j<n-i; j++)
        {
            if(array[j]>array[j+1])
            {
                //Swap the numbers
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swappedFlag = 1;
            }
        }

        if(swappedFlag==0)
        {
            // Data is already sorted
            break;
        }

        // Print after each iteration:
        printf("\n\nIteration #%d: ",i);
        for(c=0; c<n; c++)
        {
            printf("%d ",array[c]);
        }
    }
    printf("\n\n\nSorting complete!\n\n");

    return 0;
}