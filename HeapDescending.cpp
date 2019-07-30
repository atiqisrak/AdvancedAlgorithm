#include <iostream>

using namespace std;

void heapify(int* heap, int i, int n)
{
    int left = 2*i;
    int right = 2*i+1;
    int smallest = i;

    if( left <= n && heap[left]<heap[i])
        smallest = left;
    if( right <= n && heap[right]<heap[smallest])
        smallest = right;

    if(smallest != i)
    {
        int temp = heap[smallest];
        heap[smallest] = heap[i];
        heap[i] = temp;
        heapify(heap,smallest,n);
    }
}

void buildHeap(int* heap,int n)
{
    for(int i=n/2;i>=1;i--)
        heapify(heap,i,n);
}

int main()
{
    int n;
    //cout<<" Number of elements ";
    cin>>n;
    int heap[n+1];
    //cout<<" Enter elements "<<endl;
    for(int i=1;i<=n;i++)
        cin>>heap[i];
    buildHeap(heap,n);
    int heapSize = n;
    for(int i=n;i>=2;i--)
    {
        int temp = heap[1];
        heap[1] = heap[i];
        heap[i] = temp;
        heapSize--;
        heapify(heap,1,heapSize);
    }

    //cout<<" After Sorting\n";
    for(int i=1;i<=n;i++)
        cout<<" "<<heap[i];
    return 0;
}
