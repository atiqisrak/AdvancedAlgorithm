#include <stdio.h>
int array[1000],low,high,temp;
int partition (int low, int high){
    int pivot = array[high]; // pivot
    int i = (low - 1); // Index of smaller element
    for (int j = low; j <= high- 1; j++){
        // If current element is smaller than or equal to pivot
        if (array[j] <= pivot) //exit if there is no or 1 element in the segment
        {
            i++; // increment index of smaller element
        //swap(&array[i], &array[j]);
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;}
    }
    //swap(&array[i + 1], &array[high]);
    temp=array[i+1];
    array[i+1]=array[high];
    array[high]=temp;
    return (i + 1);
}
void quicksort(int pivot, int last) {
    if (pivot < last) {
        int part = partition(pivot, last);
        quicksort(pivot, part - 1);
        quicksort(part + 1, last);}
}
int main(){
    int n,i;
    printf("Input the size of the array :");
    scanf("%d",&n);
    printf("\n\nEnter each element: \n\n");
    for(i=0; i<n; i++)
    {scanf("%d",&array[i]);}
    quicksort(0,n-1);
    printf("\n\nAfter Sorting: \n\n");
    for(i=0; i<n; i++){printf("%d ",array[i]);}
    return 0;
}
