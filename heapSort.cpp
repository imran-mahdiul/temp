#include <iostream>
#include <ctime>
using namespace std;

void heap(int *arr, int i, int num)
{
    int j, temp;
    temp = arr[i];
    j = 2*i;
    while (j <= num)
    {
        if (j < num && arr[j+1] > arr[j])
            j = j+1;
        if (temp > arr[j])
            break;
        else if (temp <= arr[j])
        {
            arr[j/2] = arr[j];
            j = 2*j;
        }
    }
    arr[j/2] = temp;
    return;
}
void heapsort(int *arr, int num)
{
    int i, temp;
    for (i = num; i >= 2; i--)
    {
        temp = arr[i];
        arr[i] = arr[1];
        arr[1] = temp;
        heap(arr, 1, i - 1);
    }
}
void createHeap(int *arr, int num)
{
    int i;
    for(i = num/2; i >= 1; i--)
    {
        heap(arr, i, num);
    }
}
int main()
{
    int num, i, x;
    cout<<"How many elements do you want to enter?\n";
    cin>>num;
    int arr[20];
    for (i = 1; i <= num; i++)
    {
        cout<<"Enter element : "<<(i)<<endl;
        cin>>arr[i];
    }
    createHeap (arr,num);
    heapsort(arr, num);
    cout<<"\n\nSorted Array using heapsort\n";
    for (i = 1; i <= num; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;

    const int arr_size = 10;
    int array_1[arr_size];
    srand(time(0));
    // populate the array
    for(int i=0;i<arr_size;i++){
        array_1[i] = rand()%100+1; // random value between 1-100;
    }
    // Print the unsorted array
    cout<<"Before Sorting :\n"<<endl;
    for(int i=0;i<arr_size;i++){
        cout<<array_1[i]<<",";
    }
    cout<<endl;


    createHeap (array_1,arr_size);
    heapsort(array_1, arr_size);

    cout<<"Sorted elements: ";

    for(int i=0;i<arr_size;i++){
        cout<<array_1[i]<<",";
    }
    cout<<endl;
    return 0;
}
